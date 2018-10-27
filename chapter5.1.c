#include <stdio.h>
#include "stdlib.h"

int main(void){
    int randomNumber;

    int frequency1 = 0;
    int frequency2 = 0;
    int frequency3 = 0;
    int frequency4 = 0;
    int frequency5 = 0;
    int frequency6 = 0;
    int frequency7 = 0;
    int frequency8 = 0;
    int frequency9 = 0;
    int frequency10 = 0;
    int frequency11 = 0;
    int frequency12 = 0;
    int frequency13 = 0;
    int frequency14 = 0;
    int frequency15 = 0;
    int frequency16 = 0;

    for(int i =0; i <= 160000; i++ ){
        randomNumber = rand()%16 + 1;

        switch(randomNumber){
            
            case 1:
                frequency1++;
                break;
            case 2:
                frequency2++;
                break;
            case 3:
                frequency3++;
                break;
            case 4:
                frequency4++;
                break;
            case 5:
                frequency5++;
                break;
            case 6:
                frequency6++;
                break;
            case 7:
                frequency7++;
                break;
            case 8:
                frequency8++;
                break;
            case 9:
                frequency9++;
                break;
            case 10:
                frequency10++;
                break;
            case 11:
                frequency11++;
                break;
            case 12:
                frequency12++;
                break;
            case 13:
                frequency13++;
                break;
            case 14:
                frequency14++;
                break;
            case 15:
                frequency15++;
                break;
            case 16:
                frequency16++;
                break;
        }

    }

    printf("Face\tFrequency\n");
    printf("1\t%d\n", frequency1);
    printf("2\t%d\n", frequency2);
    printf("3\t%d\n", frequency3);
    printf("4\t%d\n", frequency4);
    printf("5\t%d\n", frequency5);
    printf("6\t%d\n", frequency6);
    printf("7\t%d\n", frequency7);
    printf("8\t%d\n", frequency8);
    printf("9\t%d\n", frequency9);
    printf("10\t%d\n", frequency10);
    printf("11\t%d\n", frequency11);
    printf("12\t%d\n", frequency12);
    printf("13\t%d\n", frequency13);
    printf("14\t%d\n", frequency14);
    printf("15\t%d\n", frequency15);
    printf("16\t%d\n", frequency16);
    
    return 0;
}