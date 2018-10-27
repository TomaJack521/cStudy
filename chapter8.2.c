#include<stdio.h>
#define SIZE 90

int main(void){
    char s[SIZE];
    int x, y;
    puts("Please input two integer:");
    scanf("%d %d",&x, &y);

    sprintf(s, "the input integer are %d and %d", x,y);
    printf("%s\n",s);

    return 0;
}