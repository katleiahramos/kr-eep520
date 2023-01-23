#include <stdio.h>

int main () {
    int myInt = 5;
    int *intPointer;
    intPointer = &myInt;

    printf("Address of myInt variable: %x\n", &myInt);
    printf("Address stored in ip variable: %x\n", intPointer);
    printf("Value of *ip variable: %d\n", *intPointer);
    return 0;
}