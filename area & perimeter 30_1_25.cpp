#include <stdio.h>

int main() 
{ 
float l, b, a,p;

// Input length and width of the rectangle
printf("Enter the length of the rectangle: ");
scanf("%f", &l);

printf("Enter the breadth  of the rectangle: ");
scanf("%f", &b);

// Calculate area and perimeter
a= l * b;
p = 2 * (l + b);

// Display the results
printf("Area of the rectangle = %.2f\n", a);
printf("Perimeter of the rectangle = %.2f\n", p);

return 0;

}

