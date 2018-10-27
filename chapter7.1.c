#include<stdio.h>

int main(void){
    int a;
    int *aPtr;

    a = 6;
    aPtr = &a;

    printf("The address of a is %p,\nThe value of aPtr is %p.\n", &a, aPtr);

    printf("\nThe value of a is %d,\nThe value of *aPtr is %d\n", a, *aPtr);

    printf("\nShowing that * and & are complements of each other\n&*aPtr = %p\n *&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0;
}