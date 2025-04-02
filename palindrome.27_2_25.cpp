#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, digit;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    
    while (num != 0) {
        digit = num % 10;                 
        reversed = reversed * 10 + digit; 
        num = num / 10;                   
    }

    
    if (originalNum == reversed) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}