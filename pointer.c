#include <stdio.h>

void record(char *p1, char *p2){

    int i;
    for(i = 0; *(p1+i) !='\0'; i++){
        p2[i] = *(p1 + i);
    }
    // while( *p1++ = *p2++){
    //     ;
    // }
}

int main(){
    char *p_real = "I love china very much.", p_rep[40];

    record(p_real, p_rep);
    printf("%s\n", p_real);
    printf("%s\n", p_rep);
    
    return 0;
}
//内存不能written，
//被重新写入的指针是不能够为指针的，因为指针并不知道具体的长度等等。
//指针指向字符串的时候，存在常量内存区，不可以写，只可以读。



// void copy(char a[], char b[]){

//     int i;
//     for(i = 0; a[i] != '\0'; i++){
//         b[i] = a[i];
//     }
//     b[i] = '\0';
// }

// int main(){
    
//     char from[] = "I love my country", to[40];
//     copy(from, to);
//     printf("%s\n", from);
//     printf("%s\n", to);

//     return 0;
// }