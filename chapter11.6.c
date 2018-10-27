#include<stdio.h>

struct client{
    unsigned account;
    char lastName[30];
    char firstName[20];
    double amount;
};

int main(void){
    FILE *cPtr;
    struct client sample = {0, "", "", 0.00};
    int test = 0;

    if((cPtr = fopen("credit.bat","rb")) == NULL){
        puts("Load file fail");

    }else{
        printf("%-6s%-16s%-11s%10s\n", "account", "lastName", "firstName", "amount");

        while(!feof(cPtr)){
            test = fread(&sample, sizeof(struct client), 1, cPtr);

            if(test != 0 && sample.account !=0){
                printf("%-6d%-16s%11s%10.2lf\n",
                    sample.account, sample.lastName,
                    sample.firstName, sample.amount);
            }
        }
        fclose(cPtr);
    }
}