#include<stdio.h>

float conver(float celsius);

int main(){
    float celsius;
    printf("Enter celsius:\n");
    scanf("%f", &celsius);

    printf("The value of %f degree in  fehrenheit is %.2f\n", celsius, conver(celsius));
    return 0;
}

float conver(float celsius){
    float result;
    result = (float)(celsius*1.8)+32;
    return result;
}