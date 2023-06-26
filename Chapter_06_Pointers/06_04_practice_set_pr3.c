#include<stdio.h>

void value(int a);

int main(){
    int i=4;
    printf("%d\n", i*10);
    value(i);
    printf("%d\n", *(&i));
    return 0;
}

void value(int a){
    int result;
    result = a;
}