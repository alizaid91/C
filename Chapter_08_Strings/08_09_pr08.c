#include<stdio.h>
int occurence(char st[], char c){
    char *ptr = st;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "Ali Zaid";
    int count = occurence(st, 's');
    printf("Occurence = %d\n", count);
    return 0;
}