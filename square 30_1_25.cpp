#include <stdio.h>

int main() { double num, square;


printf("Enter a number: ");
scanf("%lf", &num);


square = num * num;


printf("Square of %.2lf = %.2lf\n", num, square);

return 0;

}

