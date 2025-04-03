
#include <stdio.h>


int sum_of_squares(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return (n * n) + sum_of_squares(n - 1); 
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = sum_of_squares(n);
    printf("Sum of squares of first %d natural numbers is: %d\n", n, result);

    return 0;
}

