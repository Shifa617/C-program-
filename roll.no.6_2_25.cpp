#include <stdio.h>

int main() {
    int rollNumbers[] = {97,98,99, 100, 101, 102, 103}; 
    int size = sizeof(rollNumbers) / sizeof(rollNumbers[0]);
    int i, found = 0;

    for (i = 0; i < size; i++) {
        if (rollNumbers[i] == 100) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Roll number 100 is present.\n");
    } else {
        printf("Roll number 100 is not present.\n");
    }

    return 0;
}