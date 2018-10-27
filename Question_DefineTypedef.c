// this function is to make the define and typedef clear by using some special 
// code.

// define means just to replace the string to the refer code in the pretreatment
// stage
// typedef means to change the type to another and use like constructor in java.

// #include <stdio.h>

// #define toString "I love you"
// #define PIM1 char*
// typedef char* PIM2;

// int main(){
//     PIM1 x, y;
//     PIM2 a, b;

//     printf("using #define: %lu, %lu\n", sizeof(x), sizeof(y));
//     printf("using typedef: %lu, %lu\n", sizeof(a), sizeof(b));
    
//     return 0;
// }


// no use the recursive and loop to output from 0 to 999;

#include <stdio.h>
#define A(x) x;x;x;x;x;x;x;x;x;x;
int main(){
    
    int n = 0;
    
    A(A(A(printf("%d\n", n++))));

    return 0;
}