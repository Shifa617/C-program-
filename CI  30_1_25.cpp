#include <stdio.h> 
#include <math.h>

int main() 
{ 
double p, r, t, ci;


printf("Enter principal amount: ");
scanf("%lf", &p);

printf("Enter rate of interest : ");
scanf("%lf", &r);

printf("Enter time : ");
scanf("%lf", &t);




ci = p * pow((1 + r/ 100),  t);


printf("Compound Interest = %.2lf\n", ci);

return 0;

}

