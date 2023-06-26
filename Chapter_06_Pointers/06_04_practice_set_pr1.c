#include<stdio.h>

int main(){
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The address of valiable a is %u\n", ptr);
    printf("The value of valiable a is %u\n", *ptr);
    return 0;
}