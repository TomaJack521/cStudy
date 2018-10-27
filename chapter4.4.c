#include<stdio.h>

int main(void){
    unsigned int number = 0;

    puts("Please input an integer number: ");
    scanf("%u", &number);

    // print the first diagram
    puts("(A)");
    for(int column = 1; column <= number; column++){
        for(int row = 0; row < column; row++){
            if(row == column - 1){
                puts("*");
            }else{
                printf("%s", "*");
            }
        }
    }

    puts("(B)");
    for(int column = 1; column <= number; column++){
        for(int row = number; row > column-1; row--){
            if(row == column){
                puts("*");
            }else{
                printf("%s", "*");
            }
        }
    }
    
    puts("(C)");
    for(int column = 0; column < number; column++){
        for(int row = 0; row < number; row++){
            if(row == number - 1){
                puts("*");
            }else if(row < column){
                printf(" ");
            }else{
                printf("*");
            }
        }
    }

    puts("(D)");
    for(int column = 1; column <= number; column++){
        for(int row = 1; row <= number; row ++){
            if(row == number){
                puts("*");
            }else if(row <= number - column){
                printf(" ");
            }else{
                printf("*");
            }
        }
    }
    
}