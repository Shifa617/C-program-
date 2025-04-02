#include <stdio.h>

int main()  
{ 
int num, square;


printf("Enter a natural number: ");
scanf("%d", &num);

if (num <= 0) {
    printf("Please enter a positive natural number.\n");
} else {
    
    square = num * num;
    
    
    printf("Square of %d = %d\n", num, square);
}

return 0;

}

