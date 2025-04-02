#include <stdio.h>
#include <math.h>  // Required for pow() function

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    
    int temp = num;
    while (temp != 0) {
        temp = temp / 10;
        n++;
    }

    
    temp = num;
    while (temp != 0) {
        remainder = temp % 10; 
        result += pow(remainder, n); 
        temp = temp / 10; 
    }

    
    if (originalNum == result) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}