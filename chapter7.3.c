#include<stdio.h>

void function1(int a);
void function2(int a);
void function3(int a);

int main(void){
    void (*f[3]) (int) = {function1, function2, function3};

    int i;
    printf("%s","Enter a number between 0-2, 3 exist");
    scanf("%d", &i);

    while(i >= 0 && i < 3){
        (*f[i])(i);

        printf("%s", "Enter a number between 0-2, 3 exist");
        scanf("%d", &i);
    }

    puts("Program execution conmpleted.");

}

void function1(int a){
    printf("The function1 execution\n");
}

void function2(int a){
    printf("The function2 execution\n");
}

void function3(int a){
    printf("The function3 execution\n");
}