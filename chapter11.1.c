#include<stdio.h>

int main(void){
    unsigned int accountNumber;
    char name[30];
    double amount;

    FILE *cfPtr;

    if((cfPtr = fopen("client.bat","w")) == NULL){
        puts("The file can not open");
    }else{
        printf("%s\n%s\n","Please input the account, name, and amount",
            "enter EOF to stop");
        printf("%s", "?");
        scanf("%d%29s%lf",&accountNumber, name, &amount);

        while(!feof(stdin)){
            fprintf(cfPtr, "%d %s %.2f\n", accountNumber, name, amount);
            printf("?");
            scanf("%d%29s%lf",&accountNumber, name, &amount);
        }

        fclose(cfPtr);
    }
}