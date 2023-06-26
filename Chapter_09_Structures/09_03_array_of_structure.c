#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee facebook[100];
    
    facebook[0].code = 100;
    facebook[0].salary = 100.4;
    strcpy(facebook[0].name, "Ali");

    facebook[1].code = 101;
    facebook[1].salary = 99.3;
    strcpy(facebook[1].name, "Zaid");
 
    facebook[3].code = 102;
    facebook[3].salary = 100.4;
    strcpy(facebook[3].name, "Shaikh");
    return 0;
}