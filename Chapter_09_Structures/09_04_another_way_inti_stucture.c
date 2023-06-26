#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee Ali={100, 34.56, "Ali"};

    printf("code is: %d \n", Ali.code);
    printf("Salary is: %f \n", Ali.salary);
    printf("Name is: %s \n", Ali.name);
    
    return 0;
}