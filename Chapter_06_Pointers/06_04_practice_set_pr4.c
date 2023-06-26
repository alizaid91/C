#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}

int main(){
    int i, j, sum;
    float avg;
    
    printf("Enter the value of i:\n");
    scanf("%d", &i);
    printf("Enter the value of j:\n");
    scanf("%d", &j);

    sumAndAvg(i, j, &sum, &avg);
    printf("The value sum is %d\n", sum);
    printf("The value avg is %.2f\n", avg);

    return 0;
}

