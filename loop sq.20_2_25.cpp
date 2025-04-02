#include <stdio.h>

int main() {
    int i, num, sum = 0;

    
    printf("Enter 10 numbers:\n");
    for(i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        sum += num * num;  
    }

    
    printf("Sum of squares of the 10 numbers: %d\n", sum);

    return 0;
}