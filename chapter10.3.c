#include<stdio.h>

void binarySwift(unsigned int value);

int main(void){
    unsigned int passNumber;

    puts("Please input a unsigned number");
    scanf("%u", &passNumber);

    binarySwift(passNumber);

    return 0;
}

void binarySwift(unsigned int value){
    int circle = 1 << 31;

    printf("The binary form of %u is: ", value);

    for(int i = 1; i <= 32; i++){
        putchar(value & circle ? '1':'0');
        value <<= 1;// = value = value<<1
    }

    puts("");
}