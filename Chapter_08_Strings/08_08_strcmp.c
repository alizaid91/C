#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hello";
    char *st2 = "Ali";
    int val = strcmp(st1, st2);
    printf("Now val is %d\n", val);
    return 0;
}