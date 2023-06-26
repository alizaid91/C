#include<stdio.h>


/*Question.01: Write a program yo print multiplication table 
of given number n*/
// int main(){
//     int n;
//     printf("Enter value of n:\n");
//     scanf("%d", &n);
//     printf("\n");

//     for(int a=1; a<=10; a++){
//         printf("%d X %d = %d\n", n, a, a*n);
//     }
//     return 0;
// }


/*Question.02: Write a program to claculate the sum of the 
numbers occuraing in table of given number n*/
// int main(){
//     int n;
//     int sum=0;
//     printf("Enter value of n:\n");
//     scanf("%d", &n);
//     printf("\n");

//     for(int a=1; a<=10; a++){
//         sum +=8*a;
//     }
//     printf("%d\n", sum);
//     return 0;
// }


/*Question.03: Write a program to find whether the give number 
is prime of not*/

int main(){
    int n, prime=1;
    printf("Enter the number:\n");
    scanf("%d", &n);

    for(int i=2; i<n; i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==0 && n!=2){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number\n");
    }
    return 0;
}