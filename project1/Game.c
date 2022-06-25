#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100 + 1; //--> generates a random no. between 1 and 100
     //   printf("The number is %d\n", number);
     // keep running the loop until the no. is gussed
    do{
        printf("Gusses the no between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed in %d attempts\n", nguess);
        }
        nguess++;


    }while(guess!=number);
    return 0;
}