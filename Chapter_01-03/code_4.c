#include<stdio.h>

// PROGRAM TO FIND AREA OF TRIANGLE
// int main(){
//     int lenth,breath;
//     printf("enter lenth : \n");
//     scanf("%d" , &lenth);

//     printf("enter breath : \n");
//     scanf("%d" , &breath);

//     printf("Area is :%f \n" , 0.5 * lenth * breath);
//     return 0;
// }


//PROGRAM TO FIND AREA OF CIRCLE
// int main(){
//     float radius;
//     printf("Enter Radius : \n");
//     scanf("%f" , &radius);

//     printf("Area of your circle is : %f square meter \n" , 3.14*radius*radius);
//     return 0;
// }


//PROGRAM TO CONVERT DEGREE CELSIUS TO FEHRENHEIT
int main(){
    float celsius;
    printf("Enter Degree Celsius: \n");
    scanf("%f" , &celsius);

    printf("Is equal to %f fehrenheit \n" , (celsius*1.8)+32);
    return 0;
}


//PROGRAM TO FIND WHETHER A NUMBER IS DEVISIBLE BY 12 OR NOT 
int main(){
    int a;
    printf("Enter a number: \n");
    scanf("%d" , &a);

    if(a%12==0){
        printf("%d is devisible by 12 \n" , a);
    }
    else{
        printf("%d is not devisible by 12 \n" ,a);
    }
    return 0;
}
