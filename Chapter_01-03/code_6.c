#include<stdio.h>

int main(){
    float income;
    printf("Enter your income (in Lakhs):\n");
    scanf("%f" , &income);
    if(income<=250000){
        printf("You don't have to pay IncomeTax \n");
    }
    else if(income>250000 && income<=500000){
        printf("Your IncomeTax is %f \n" , 0.05*(income-250000));
    }
    else if(income>=500000 && income<=1000000){
        printf("Your IncomeTax is %f \n" , 0.2*(income-250000));
    }
    else if(income>1000000){
        printf("Your IncomeTax is %f \n" , 0.3*(income-250000));
    }
    else{
        printf("Invalid Income.......\n");
    }

    return 0;
}