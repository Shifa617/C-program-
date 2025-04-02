#include <stdio.h>


int sumOfN(int n) {
    if (n == 0) 
        return 0; 
    return n + sumOfN(n - 1);  
}

int main() {
    int n;
    
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        
        printf("Sum of first %d natural numbers is: %d\n", n, sumOfN(n));
    }
    
    return 0;
}