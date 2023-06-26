#include<stdio.h>

int str_len(char * st){
        char *ptr = st;
        int len=0;
        while(*ptr!='\0'){
            len++;
            ptr++;
        }
        return len;
    }

int main(){
    char st[]  = "Ali";
    int l = str_len(st);
    printf("The length of this string is %d\n", l);
    return 0;
}