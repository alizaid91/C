#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.2662;
    //e1.name = "Shaikh Ali Zaid" -->wont work
    strcpy(e1.name, "Shaikh Ali Zaid");

    printf("Name of employee is: %s\n", e1.name);
    printf("Employee code is: %d\n", e1.code);
    printf("Salary is: %.3f\n", e1.salary);
    
    
    return 0;
}

