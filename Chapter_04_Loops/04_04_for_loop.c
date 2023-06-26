#include<stdio.h>
/*Question: Write a program to print n odd numbers take n
from user*/ 
int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for(int a=1; a<=n; a+=2){
         printf("%d\n", a);
    }
    return 0;
} 

/*Question: Write a program to print n natural number take 
n from user*/
int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for(int a=n; a; a--){
         printf("%d\n", a);
    }
    return 0;
} 