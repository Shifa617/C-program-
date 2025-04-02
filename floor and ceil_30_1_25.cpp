#include <stdio.h> 
#include <math.h>

int main()
 { 
 float a,b;
printf("Enter a number: ");
scanf("%lf", &a);

printf("Enter a number: ");
scanf("%lf", &b);


printf("Floor value = %.2lf\n", floor(a));
printf("Ceiling value = %.2lf\n", ceil(b));

return 0;

}

