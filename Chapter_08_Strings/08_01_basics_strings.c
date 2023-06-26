#include<stdio.h>

int main(){
    
    // // char str[] = {'A', 'l', 'i', '\0'};
    // char str[] = "Ali Zaid";

// //printing an string M1:
    // printf("The elements of the array are:\n");
    // int i=0;
    // while (str[i]!='\0'){
    //     printf("%c\t", str[i++]);
    // }
    // printf("\n");

 
   char str[] = "Ali Zaid";

//printing an string M2:
   char *ptr = str;
   while(*ptr!='\0'){
    printf("%c ", *ptr);
    ptr++;
    }
return 0;
}