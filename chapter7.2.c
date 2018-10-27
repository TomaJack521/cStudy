#include<stdio.h>
#include<ctype.h>

void convertToUppercase(char *sPtr);

int main(void){
    char ProcessString[] = "WelcoMe To SHAnxI PrOvINcE!";

    printf("%s\n", ProcessString);
    convertToUppercase(ProcessString);
    printf("%s\n", ProcessString);
}

void convertToUppercase(char *sPtr){
    while(*sPtr != '\0'){
        *sPtr = toupper(*sPtr);
        sPtr++;
    }
}