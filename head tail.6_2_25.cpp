#include <stdio.h>

int main() {
    char ch;
    printf("enter uppercase character ");
    scanf("%c",&ch);
    if (ch=='H')
{
        printf("It's a Head!\n");
    } else {
        printf("It's a Tail!\n");
    }

    return 0;
}