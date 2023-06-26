#include<stdio.h>

int main(){
    int i=1;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    do{
        printf("%d\n", i+2);
        i+=2;
    }while(i<=n);
    return 0;
}