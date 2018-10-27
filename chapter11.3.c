#include<stdio.h>

int main(void){
    unsigned int account;
    char name[30];
    double amount;
    unsigned int choice = 0;

    FILE *cfPtr;

    if((cfPtr = fopen("client.bat", "r")) == NULL){
        puts("Load the file fail");

    }else{
        printf("%s\n%s\n%s\n%s\n%s\n",
            "Enter request ", 
            "1 - List accounts with zero balances", 
            "2 - List accounts with credit balances",
            "3 - List accounts with debit balances",
            "-1 - End of run");

        scanf("%d", &choice);

        while(choice != -1){
            fscanf(cfPtr,"%d%29s%lf", &account, name, &amount);
            switch(choice){
                case 1:
                    puts("Accounts with zero balabces");
                    while(!feof(cfPtr)){
                        if(amount == 0){
                            printf("%-10d%-13s%7.2lf\n", account, name, amount);
                        }
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &amount);
                    }
                    break;

                case 2:
                    puts("Accounts with credit balances");
                    while(!feof(cfPtr)){
                        if(amount < 0){
                            printf("%-10d%-13s%7.2lf\n", account, name, amount);

                        }
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &amount);
                    }
                    break;

                case 3:
                    puts("Accounts with debit balances");
                    while(!feof(cfPtr)){
                        if(amount > 0){
                            printf("%-10d%-13s%7.2lf\n", account, name, amount);

                        }
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &amount);
                    }
                    break;
            }
            rewind(cfPtr);
            printf("?");
            scanf("%d", &choice);
        }

        puts("End of run");
        fclose(cfPtr);
    }
}