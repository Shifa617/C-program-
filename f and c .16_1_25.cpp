#include <stdio.h>

int main() { 
int choice;
 float f1,f2,c1,c2;





 
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c2);
    f2= (c2* 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f2);

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f1);
    c1= (f1- 32) * 5 / 9;
    printf("Temperature in celcius: %.2f\n", c1);
    

return 0;

}

