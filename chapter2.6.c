#include<stdio.h>

int main(){
    long long int number;
    puts("Please input an number");
    scanf("%d", &number);

    puts("number\tsquare\tcube");
    for(long long int i = 0; i <= number; i++){
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
   = return 0;
}