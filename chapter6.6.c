#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define size 100

int mean(const int b[]);
int median(const int b[]);
int mode(int a[], const int b[]);
int sinkingSort(int b[]);
int printArray(int b[]);

int main(void){
    srand(time(NULL));

    int score[100];
    int frequency[11];
    for(int i = 0; i < size; i++){
        score[i] = rand()%100;
    }

    puts("The inital array ");
    printArray(score);
    sinkingSort(score);
    puts("Thr sorted array");
    printArray(score);

    for(int i = 0; i < size; i++){
        frequency[score[i]]++;
    }

    mean(score);
    median(score);
    // mode(frequency, socre);

}

int printArray(int b[]){
    for(int i = 0; i < size; i++){
        printf("%d\n", b[i]);
    }

    return 0;
}

int sinkingSort(int b[]){
    
    int mark;
    for(int out = 0; out < size; out++){
        for(int inner = out; inner >0; inner--){
            if(b[inner] < b[inner - 1]){
                mark = b[inner];
                b[inner] = b[inner - 1];
                b[inner - 1] = mark;
            }
        }
    }

    return 0;
}

int mean(const int b[]){
    float total = 0.00;

    for(int i = 0; i < size; i++){
        total += b[i];
    }

    puts("**************Mean*************");
    printf("%d\t %f\n", size, total/size);

    return 0;
}

int median(const int b[]){
    float medianResult;
    if(size % 2 == 0){
        medianResult = (b[size/2] + b[size/2 +1])/2;
    }else{
        medianResult = b[size/2];
    }
    puts("**************Median*************");
    printf("The median is %f\n", medianResult);

    return 0;
}

