#include<stdio.h>
int multi(int a, int b);

int main(){
    int c = multi(a,b);
    printf("The value of c is %d\n" , c);
    // printf("%d\n", multi(2,4));
    return 0;
}

int multi(int a, int b){
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    int result;
    result = a*b;
    return result;
    }