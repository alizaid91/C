#include<stdio.h>

int main(){
    float a,b,c,d;
    printf("Enter the numbers\n");
    scanf("%f %f %f %f" , &a,&b,&c,&d);

    if(a>b && a>c && a>d){
        printf("%f is Gratest\n" , a);
    }
    else if(b>a && b>c && b>d){
        printf("%f is Gratest\n" , b);
    }
    else if(c>a && c>b && c>d){
        printf("%f is Gratest\n" , c);
    }
    else if(d>a && d>b && d>c){
        printf("%f is Gratest\n" , d);
    }
    return 0;
}