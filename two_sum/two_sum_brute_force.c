#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numSize, int target);

int main(){
	int* output_ptr;
	int i, num_size;
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
		printf("indices: %d and %d\n", output_ptr[0], output_ptr[1]);
		free(output_ptr);
	}
	output_ptr=NULL;
	return 0;

};

int* twoSum(int* nums, int numSize, int target){
	int index1, index2;
	int* ptr;
	ptr = (int*)malloc(2*sizeof(int));
	if (ptr==NULL){
		fprintf(stderr, "Memory allocation failed\n");
		return NULL;
	}
	//try removing this and declare variable inside loops
	for (index1 = 0; index1!=numSize-1; ++index1){
		for (index2=index1+1; index2<numSize; ++index2){
			if (nums[index1]+nums[index2]==target){
				ptr[0] = index1;
				ptr[1] = index2;
				return ptr;
			}
		}
	}
	return NULL;
};