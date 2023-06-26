#include<stdio.h>
int main(){
    float Marks1, Marks2, Marks3;
    float Total;

    printf("\n");

    printf("Read the folloing coditions carefully:\n");
    printf("1. Minimum percentage in each subject should be above or equal to 33 \n");
    printf("2. And you must got minimum 40 Percent marks(120 Marks) in total\n");

    printf("\n");

    printf("Enter marks in PHYSICS(0-100):\n");
    scanf("%f" , &Marks1);
    if(Marks1>100){
        printf("invalid Marks.......\n");
        return 0;
    }

    printf("Enter marks in CHEMISTRY(0-100):\n");
    scanf("%f" , &Marks2);
    if(Marks2>100){
        printf("invalid Marks.......\n");
        return 0;
    }
    
    
    printf("Enter marks in MATHEMATICS(0-100):\n");
    scanf("%f" , &Marks3);
    if(Marks3>100){
        printf("invalid Marks.......\n");
        return 0;
    }

    Total=Marks1+Marks2+Marks3;
    printf("\n");
    printf("Total Marks of PCM is %f \n" , Total);
    printf("\n");
    printf("Your Percentage of PCM is %f \n" , Total/3);

    if(Marks1>=33 && Marks2>=33 && Marks3>=33 && Total>=120){
        printf("\n");
        printf("Conguratulation You Are PASSED\n");
        printf("\n");
    }
    else{
        printf("\n");
        printf("Sorry You Are FAILED\n");
        printf("\n");
    }
    return 0;

}