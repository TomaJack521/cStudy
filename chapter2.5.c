#include<stdio.h>

int main(){
    int num, num1, num2, num3, num4, num5;
    puts("Please input an 5-digit number");
    scanf("%d", &num);
    num1 = num / 10000;
    num = num % 10000;
    
    num2 = num / 1000;
    num = num % 1000;

    num3 = num / 100;
    num = num % 100;

    num4 = num / 10;
    num5 = num % 10;

    printf("%d  %d  %d  %d  %d\n", num1, num2, num3, num4, num5);

    return 0;
}