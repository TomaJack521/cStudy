//This file is written by Runyu Zhang(Jack)
#include<stdio.h>
void staticArrayInit(void);
void automaticArrayInit(void);

int main(void){
    puts("The first call: ");
    staticArrayInit();
    automaticArrayInit();

    puts("The second call: ");
    staticArrayInit();
    automaticArrayInit();
    return 0;
}

void staticArrayInit(void){
    static int array1[3];
    size_t i;

    for(i = 0; i <3; i++){
        printf("array1[%zu] = %d\n ", i, array1[i]);
    }

    puts("\nValues on existing staticArrayInit");

    for(i = 0; i <3; i++){
        printf("array1[%zu] = %d\n", i, array1[1] +=5);
    }
}

void automaticArrayInit(void){
    int array2[3];
    size_t i;

    for(i = 0; i <3; i++){
        printf("array2[%zu] = %d\n ", i, array2[i]);
    }

    puts("\nValues on existing automaticArrayInit");

    for(i = 0; i <3; i++){
        printf("array2[%zu] = %d\n ", i, array2[1] +=5);
    }
}
