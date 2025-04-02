#include <stdio.h>

int main() {
    float a;

    
    printf("Enter a number: ");
    scanf("%f", &a);

    
    if (a >= 0 && (int)a== a) {
        printf("%.2f is a whole number.\n");
    } else {
        printf("%.2f is not a whole number.\n");
    }

    return 0;
}