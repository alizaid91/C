#include<stdio.h>

int main(){
    FILE *ptr;
    // fgetc demo for reading a file
    // ptr = fopen("getdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my charecter is %c\n", fgetc(ptr));
    // printf("The value of my charecter is %c\n", fgetc(ptr));
    // printf("The value of my charecter is %c\n", fgetc(ptr));
    // printf("The value of my charecter is %c\n", fgetc(ptr));
    // printf("The value of my charecter is %c\n", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr);
    fclose(ptr);

    return 0;
}