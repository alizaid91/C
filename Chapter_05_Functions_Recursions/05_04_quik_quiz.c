#include<stdio.h>
void Area();

int main(){
    Area();
    return 0;
}

void Area(){
    float side;
    printf("Enter side\n");
    scanf("%f", &side);
    printf("Area is %f\n", side*side);
}