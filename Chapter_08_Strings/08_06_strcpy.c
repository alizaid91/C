#include<stdio.h>
#include<string.h>

int main(){
    char *st = "This";
    char st2[42];
    strcpy(st2, st);
    printf("Now the st2 is %s\n", st2);
    return 0;
}