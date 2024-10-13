#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numSize, int target);

int main(){
	int* output_ptr;
	int i;
	int nums_array[3][4] = {
		{2, 7, 11, 15},
		{3, 2, 4},
		{3, 3}
	};
	int targets[3] = {
		9, 6, 6
	};
	for (i=0; i<3; ++i){
		output_ptr = twoSum(&nums_array[i][0], 4, targets[i]);
		if (output_ptr==NULL){
			printf("No Solution found\n");
			continue;
		};
		printf("indices: %d and %d\n", output_ptr[0], output_ptr[1]);
		printf(
			"%d+%d = %d\n",
			nums_array[i][output_ptr[0]],
			nums_array[i][output_ptr[1]],
			targets[i]
		);
		free(output_ptr);
	}
	output_ptr=NULL;
	return 0;

};

int* twoSum(int* nums, int numSize, int target){
	int* ptr;
	ptr = malloc(2*sizeof(int));
	if (ptr==NULL){
		fprintf(stderr, "Memory allocation failed\n");
		return NULL;
	}
	for (int index1 = 0; index1!=numSize-1; ++index1){
		for (int index2=index1+1; index2<numSize; ++index2){
			if (nums[index1]+nums[index2]==target){
				ptr[0] = index1;
				ptr[1] = index2;
				return ptr;
			}
		}
	}
	free(ptr);
	return NULL;
};