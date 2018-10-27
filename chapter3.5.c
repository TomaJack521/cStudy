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
        if(marklength == 0 || marklength == length - 1){
            while(markbandwith < bandwith){
                if(markbandwith == bandwith - 1){
                    puts("+");
                }else{
                    printf("+");
                }
            markbandwith++;
            }
        }else{
            while(markbandwith < bandwith){
                if(markbandwith == 0){
                    printf("%s", "+");
                }else if(markbandwith < bandwith-1){
                    printf("%s", " ");
                }else{
                    puts("+");
                }
            markbandwith++;
            }
        }
    marklength++;
    markbandwith = 0;
    }
}