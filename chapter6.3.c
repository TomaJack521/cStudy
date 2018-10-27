//This file is written by Runyu Zhang(Jack)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define rollTimes 60000
#define arraySize 7

int main(void){
    srand(time(NULL));

    size_t face;
    int roll;
    int frequency[arraySize];

    for(roll = 0; roll < rollTimes; roll++){
        face = rand()%6 + 1;
        frequency[face]++;
    }
    puts("Face\t Frequency");
    for(face = 1; face < arraySize; face++){
        printf("%zu\t %d", face, frequency[face]);
        puts(" ");
    }
}