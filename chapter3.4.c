#include<stdio.h>

int main(void){
    int length = 0, bandwith = 0;
    while(length < 1&& bandwith < 1){
        puts("please input the length(unsigned integer): ");
        scanf("%d", &length);
        puts("please input the bandwith(unsigned integer): ");
        scanf("%d", &bandwith);
        
    }
    int marklength = 0, markbandwith = 0;

    while(marklength < length){
        while(markbandwith < bandwith){
            if(markbandwith == bandwith-1){
                puts("+");
                markbandwith++;
            }
            else{
                printf("+");
                markbandwith++;
                }
            }
        markbandwith = 0;
        marklength++;
        }
    return 0;
}

