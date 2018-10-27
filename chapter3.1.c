#include<stdio.h>
// The key valiable should be initalized!!!
int main(){
    int num = 0,grade = 0,totalGrade = 0;
    int ave = 0;
    while(num < 10){
        printf("please input the %d grade", num+1);
        scanf("%d", &grade);
        totalGrade = totalGrade + grade;
        num++;
    }
    ave = totalGrade/10;
    printf("the 10 student ave grade is %d\n", ave);
}