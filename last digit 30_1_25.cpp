#include <stdio.h>

int main()
 {
 int n, last_digit;


printf("Enter a number: ");
scanf("%d", &n);


last_digit = n % 10;


printf("Last digit of the number = %d\n", last_digit);

return 0;

}

