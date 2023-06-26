#include<stdio.h>

void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d till %d :\n", num, n);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }
    for(int i=0; i<n; i++){
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("************************************************************\n\n");
}

int main(){
    int num,n;
    printf("Enter the number you want table of:\n");
    scanf("%d", &num);
    printf("Table of %d till:\n", num);
    scanf("%d", &n);
    
   int mulTable[num][n];
   printTable(mulTable[0], num, n); 


    return 0;
}