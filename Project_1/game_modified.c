#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game();

void game(){
      int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100+ 1; //Generate a random number between 1 and 100
    // printf("The number is %d\n", number);
    
    // Keep running the loop until the number is guessed
    printf("******Welcome to the NUMBER GUESSING GAME******\n");
  do{
    printf("Guess the number between 1 to 100\n");
    scanf("%d", &guess);
    if(guess>number){
        printf("Lower number please!\n");
    }
    else if(guess<number){
        printf("Higher number please!\n");
    }
    else{
        printf("You guessed it in %d attempts\n", nguesses);
        printf("\n");
        printf("******Thanks for Playing******\n");
        printf("\n");
    }
    nguesses++;
    }while(guess!=number);
}

int main(){
    int answer;
    game();

    printf("Enter 1 to play again or Enter 0 to Exit!\n");
    scanf("%d", &answer);

    if(answer==1){
        game();
    }
    else if(answer==0){
        return 0;
    }
    return 0;
}
