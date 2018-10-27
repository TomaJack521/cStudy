#include<stdio.h>

struct client{
    unsigned int account;
    char lastName[20];
    char firstName[20];
    double amount;

};

unsigned int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *readPtr);
void newRecord(FILE *readPtr);
void deleteRecord(FILE *readPrt);

int main(void){
    int mark;
    
    FILE *cPtr;
    if((cPtr = fopen("credit.bat","rb+")) == NULL){
        puts("Load file fail");
    }else{
        while((mark = enterChoice()) != 5){
            switch(mark){

                case 1:
                    textFile(cPtr);
                    break;

                case 2:
                    updateRecord(cPtr);
                    break;

                case 3:
                    newRecord(cPtr);
                    break;

                case 4:
                    deleteRecord(cPtr);
                    break;
            }
        }
        fclose(cPtr);

    }
}

unsigned int enterChoice(void){
    int choice;
    
    printf("%s\t%s\n%s\t%s\n%s\n", 
        "1 print file", "2 update account", 
        "3 add new account", "4 delete account", 
        "5 end program");

    puts("please input your choice");
    printf("%s", "?");
    scanf("%d", &choice);
    
    return choice;
}

void textFile(FILE *readPtr){
    struct client sample = {0, "", "", 0.00};
    FILE *wPtr;
    int content;

    if((wPtr = fopen("account.txt", "w")) == NULL){
        puts("Load file fail");
    }else{
        rewind(readPtr);
        fprintf(wPtr, "%-6s%-16s%-11s%10s", "Account", "Last name", "first name", "amount");

        while(!feof(readPtr)){
            content = fread(&sample, sizeof(struct client), 1, readPtr);

            if(content != 0 && sample.account != 0){
                fprintf(wPtr, "%-6d%-16s%-11s%10.2f", 
                    sample.account, sample.lastName, sample.firstName, sample.amount);
            }
        }
        fclose(wPtr);
    }
}

void updateRecord(FILE *readPtr){
    unsigned int account;
    double transaction;
    struct client sample = {0, "", "", 0.00};

    puts("Enter account to update, from 1 - 100");
    scanf("%u", &account);

    fseek(readPtr, (account - 1)* sizeof(struct client), SEEK_SET);
    fread(&sample, sizeof(struct client), 1, readPtr);

    if(sample.account == 0){
        printf("Data not exist");
    }else{
        printf("%-6d%-16s%-11s%10.2f\n\n", sample.account,
            sample.lastName, sample.firstName, sample.amount);

        puts("+ to add, - to sub");
        scanf("%lf", &transaction);
        sample.amount += transaction;

        printf("%-6d%-16s%-11s%10.2f\n\n", sample.account,
            sample.lastName, sample.firstName, sample.amount);

        fseek(readPtr, (account - 1)* sizeof(struct client), SEEK_SET);
        fwrite(&sample, sizeof(struct client), 1, readPtr);
    }
}

void newRecord(FILE *readPtr){
    int account;
    struct client sample = {0, "", "", 0.00};

    puts("Please input new account");
    scanf("%d", &account);
    fseek(readPtr, (account - 1) * sizeof(struct client), SEEK_SET);
    fread(&sample, sizeof(struct client), 1, readPtr);

    if(sample.account == account){
        puts("Content already exist");
    }else{
        puts("please input lastName, firstName, amount");
        scanf("%16s%10s%lf", 
            sample.lastName, sample.firstName, &sample.amount);
        sample.account = account;
        fseek(readPtr, (account - 1)*sizeof(struct client), SEEK_SET);

        fwrite(&sample, sizeof(struct client), 1, readPtr);
    }
}

void deleteRecord(FILE *readPrt){
    int account;
    struct client sample = {0, "", "", 0.00};

    puts("input the delete account number");
    scanf("%d", &account);

    fseek(readPrt, (account - 1)*sizeof(struct client), SEEK_SET);
    fread(&sample, sizeof(struct client), 1, readPrt);

    if(sample.account == 0){
        puts("content not exist");
    }else{
        struct client sample = {0, "", "", 0.00};
        fseek(readPrt, (account - 1)*sizeof(struct client), SEEK_SET);
        fwrite(&sample, sizeof(struct client), 1, readPrt);
    }
}