#include<stdio.h>
void greeting1();
void greeting2();
void greeting3();

void greeting1(){
    printf("Good Morning Ali\n");
}

void greeting2(){
    printf("Good Afternoon Ali\n");
}

void greeting3(){
    printf("Good Night Ali\n");
}

int main(){
    greeting1();
    greeting2();
    greeting3();

    return 0;
}