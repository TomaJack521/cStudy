#include<stdio.h>

struct client{
    unsigned int account;
    char lastName[30];
    char firstName[20];
    double amount;
};

int main(void){

    FILE *cPtr;
    struct client blankclient = {0,"","",0.00};
    if((cPtr = fopen("credit.bat","rb+")) == NULL){
        puts("Load file fail");
    }else{
        puts("Enter account number ( 1 to 100, 0 to end input)");
        printf("?");
        scanf("%d", &blankclient.account);

        while(blankclient.account != 0){
            printf("Please input the lastName, firstName, amount\n");
            fscanf(stdin, "%30s%20s%lf", blankclient.lastName, blankclient.firstName, &blankclient.amount);

            fseek(cPtr, (blankclient.account-1)*sizeof(struct client), SEEK_SET);

            fwrite(&blankclient, sizeof(struct client), 1, cPtr);

            puts("Enter account number ( 1 to 100, 0 to end input)");
            printf("?");
            scanf("%d", &blankclient.account);

        }
        fclose(cPtr);
    }
}