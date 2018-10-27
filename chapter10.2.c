#include<stdio.h>

union number{
    int x;
    double y;
};
int main(void){
    union number value;

    value.x = 10;
    printf("%d,%f\n", value.x, value.y);

    value.y = 31.34;
    printf("%d,%5f\n", value.x, value.y);

    value.x = 15;
    value.y = 243.454;
    printf("%d,%f\n", value.x, value.y);
    
    return 0;
}