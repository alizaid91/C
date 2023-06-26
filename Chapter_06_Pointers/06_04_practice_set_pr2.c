#include<stdio.h>

void check(int a);

int main(){
    int i=4;
    printf("the value of i is %d\n", i);
    check(i);
    printf("the address of i is %u\n", &i);

    return 0;
}

void check(int a){
    printf("the address of variable a is %u\n", &a);
}