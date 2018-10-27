// this function is to make the define and typedef clear by using some special 
// code.

// define means just to replace the string to the refer code in the pretreatment
// stage
// typedef means to change the type to another and use like constructor in java.

#include <stdio.h>

#define toString "I love you"
#define PIM1 char*
typedef char* PIM2;

void main(){
    PIM1 x, y;
    PIM2 a, b;

    printf("using #define: %d, %d", sizeof(x), sizeof(y));
    printf("using typedef: %d, %d", sizeof(a), sizeof(b));
    
}