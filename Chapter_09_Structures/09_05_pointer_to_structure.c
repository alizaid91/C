#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101;// also you can write : ptr->code;
    ptr->code = 101;
    printf("%d\n", e1.code); 
    

    return 0;
}