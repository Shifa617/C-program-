#include <stdio.h>

int main() {
    int i, num = 1, sum = 0;

    for(i = 1; i <= 10; i++) {
        sum += num * num; 
        num += 2;  
    }

    
    printf("Sum of squares of first 10 odd natural numbers: %d\n", sum);

    return 0;
}