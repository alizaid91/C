#include<stdio.h>

int main(){
    int a = 72;
    int *b = &a;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *b);
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", b);
    printf("The address of b is %u\n", &b);
    printf("The value of b is %u\n", *(&a));
    return 0;
}