#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main(){
    char c[] = "My name is Ali Zaid";
    encrypt(c);
    printf("Encrypted string is: %s\n", c);
    return 0;
}