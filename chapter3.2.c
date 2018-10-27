#include<stdio.h>

int main(){
    int num = 0, grade = 0, totalGrade = 0;
    float aveGrade = 0;

    while(grade != -1){
        printf("%s", "\nPlease input the grade(-1 stop): ");
        scanf("%d", &grade);
        if(grade != -1){
            num++;
            totalGrade += grade;
        }else{
            break;
        }
    }
    aveGrade = (float)totalGrade / (num + 1);
    printf("\nThe average grade is %.2f\n", aveGrade);

    return 0;
}