//This file is written by Runyu Zhang(Jack)
#include<stdio.h>

#define arraySize 100

int main(void){
    int n[arraySize];

    for(int i = 0; i < arraySize; i++){
        n[i] = 0;
    }

    printf("element\t inner\n");
    for(int i = 0; i < arraySize; i++){
        n[i] = i * (i + 1);
        printf("%d\t %d\n", i, n[i]);
    }
}