#include<stdio.h>

int main(void){
    unsigned int account;
    char name[30];
    double amount;

    FILE *cfPtr;

    if((cfPtr = fopen("client.bat", "r")) == NULL){
        puts("There is no aim file");

    }else{
        printf("%-10s%-13s%s\n","account", "name", "amount");
        fscanf(cfPtr,"%d%29s%lf",&account, name, &amount);

        while(!feof(cfPtr)){
            printf("%-10u%-13s%7.2f\n", account, name, amount);
            fscanf(cfPtr,"%d%29s%lf", &account, name, &amount);

        }
        
        fclose(cfPtr);
    }
}