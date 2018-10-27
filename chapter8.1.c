#include<stdio.h>
#define SIZE 80

void reverse(const char * const sPtr);

int main(void){
    char aim[SIZE];

    puts("Please input an sentence: ");

    fgets(aim, SIZE, stdin);

    printf("The reverse sentence: ");

    reverse(aim);

    puts("");
    puts("");
    return 0;
}
void reverse(const char * const sPtr){
    if(sPtr[0] == '\0'){
        return;
    }else{
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    }

}