//This file is written by Runyu Zhang(Jack)
#include<stdio.h>
#define Frequency 11
#define SampleSize 40

int main(void){
    size_t size;
    size_t rate;

    int sample[SampleSize] = {3,5,2,4,3,5,3,2,5,4,4,3,4,4,3,6,5,8,5,6,9,7,5,5,1,2,3,3,2,2,2,2,1,1,
            4,6,7,5,3,5};
    int frequency[Frequency];
    for(size = 0; size < SampleSize; size++){
        frequency[sample[size]]++;
    }
    puts("frequencyNumber\t frequency");
    for(rate = 0; rate < Frequency; rate++){
        printf("%2zu\t %d\n", rate, frequency[rate]);
    }
}