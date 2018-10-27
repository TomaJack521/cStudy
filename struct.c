#include <stdio.h>
#include <string.h>

int main(){

    struct data
    {
        int dd;
        int mm;
        int yy;
    };

    struct people
    {
        char *name;
        int age;
        char major[50];
        float salary;
        struct data birthday;
        
    }Runyu, PaiziHan;
    // string 的*指针用法与strcpy用法区别
    // *赋予地址，只有一个string
    // strcpy会自动生成一个string再赋予变量

    Runyu.age = 18;
    Runyu.birthday.dd = 22;
    Runyu.birthday.mm = 12;
    Runyu.birthday.yy = 1997;
    Runyu.name = "Runyu zhang";
    strcpy(Runyu.major, "Computer Science");
    printf("The age of Runyu : %d\n", Runyu.age);
    printf("The name of Runyu : %s\n", Runyu.name);
    printf("The major of Runyu : %s\n", Runyu.major);
    printf("The salary of Runyu : %f\n", Runyu.salary);
    printf("The birthday of Runyu : %d-%d-%d\n", Runyu.birthday.yy, Runyu.birthday.mm, Runyu.birthday.dd);
    
    printf("%lu\n", sizeof(Runyu));
    
    return 0;
}