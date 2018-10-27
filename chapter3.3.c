#include<stdio.h>

int main(void){
    int counter = 0;
    int passedStu = 0;
    int value;
    while(counter < 10){
        puts("\nPlease input the value(1 passed; 2 failed) ");
        scanf("%d", &value);
        if(1 == value){
            passedStu += 1;
        }else if(2 == value){
            ;
        }
        counter++

    }
    printf("The passed number is %d\n", passedStu);
    printf("The failed number is %d\n", 10-passedStu);
    
    if(passedStu >= 8){
        printf("Bouns to instructor!\n");
    }
}