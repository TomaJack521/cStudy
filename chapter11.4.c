#include<stdio.h>

struct client{
    unsigned int accNUm;
    char lastName[30];
    char firstName[20];
    double amount;
};

int main(void){
    unsigned int i;
    struct client blankClient = {0, "", "", 0.00};

    FILE *fPtr;

    if((fPtr = fopen("credit.bat", "wb")) == NULL){
        puts("Load file fail");
        
    }else{
        for(i = 0; i < 1000; i++){
            fwrite(&blankClient, sizeof(struct client), 1, fPtr);
        }

        fclose(fPtr);
        puts("The process finished");
    }

}