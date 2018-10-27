#include<stdio.h>

int main(void){
    static int n[5];

    printf("The address of n is %p.\n", n);
    printf("The address of n is %p.\n", &n);
    printf("The address of n is %p.\n", &n[0]);        
            
}