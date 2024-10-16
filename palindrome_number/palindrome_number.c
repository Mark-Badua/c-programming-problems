#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x);

int main(){
    printf("answer: %d\n", isPalindrome(121));
    printf("answer: %d\n", isPalindrome(-121));
    printf("answer: %d\n", isPalindrome(10));
    return 0;
}


bool isPalindrome(int x) {
    // single digit
    int remaining, reversed_digit, digit;
    remaining = x;
    reversed_digit = 0;
    printf("remaining: %d\n", remaining);
    if (x >=0 && x<10){
        return true;
    };
    if ((x < 0) || (x%10==0)) {
        return false;
    };
    while (remaining > reversed_digit){
        digit = remaining % 10;
        remaining = remaining/10;
        reversed_digit = (reversed_digit*10) + digit;
        printf("reversed_digit: %d\n", reversed_digit);
        printf("remaining: %d\n", remaining);
    }
    if ((reversed_digit== remaining) ||(reversed_digit/10) == remaining){
        return true;
    }
    return false;
    

}