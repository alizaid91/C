#include<stdio.h>
void display(); //function prototype

int main(){
    int a;
    printf("initializing display function\n");
    display(); //Function call
    printf("Display function finished its work\n");  
    return 0;
}

//function Defination
void display(){
    printf("This is display\n");
}