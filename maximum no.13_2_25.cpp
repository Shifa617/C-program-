#include <stdio.h>

int main() {
 int a,b,c;


printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);

// Checking the maximum number using if-else ladder
if (a>= b && a>= c) {
    printf("The maximum number is: %d\n", a);
} 
else if (b>= a && b>= c) {
    printf("The maximum number is: %d\n", b);
} 
else {
    printf("The maximum number is: %d\n", c);
}

return 0;

}

