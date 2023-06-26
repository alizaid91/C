#include<stdio.h>
void average();

int main(){
    average();
    return 0;
}

void average(){
    float num1, num2, num3;
    printf("Enter 1st number\n");
    scanf("%f", &num1);
    printf("Enter 2nd number\n");
    scanf("%f", &num2);
    printf("Enter 3rd number\n");
    scanf("%f", &num3);
    
    printf("The Average of the three numbers is %f\n", (num1+num2+num3)/3);
}