#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x);

int main(){
    printf("121 is palindrome? answer: %d\n", isPalindrome(121));
    printf("-121 is palindrome? answer: %d\n", isPalindrome(-121));
    printf("10 is palindrome? answer: %d\n", isPalindrome(10));
    return 0;
}

bool isPalindrome(int x) {
    int remaining, reversed_digit;
    remaining = x;
    reversed_digit = 0;
    if ((x < 0) || (x!=0 && x%10==0)) {
        return false;
    };
    while (remaining > reversed_digit){
        reversed_digit = (reversed_digit*10) + (remaining % 10);
        remaining /= 10;
    }
    return (reversed_digit== remaining) || (reversed_digit/10) == remaining;
}