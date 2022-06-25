#include<stdio.h>
#include<stdlib.h>
#include<time.h>

snakeWaterGun(char you, char comp){
    //return 1 if you win , return -1 if you loose and return 0 if draw
    //condition for draw
    //case covered
    // ss
    // gg
    // ww
    if(you == comp){
        return 0;
    } 
    //non-draw conditions
    //case covered
    // sg, gs
    // sw, ws
    
    // gw , wg
    if(you== 's' && comp=='g'){
        return -1;
     
    }
    else if(you== 'g' && comp=='s'){
        return 1;

    }
    if(you== 's' && comp=='w'){
        return 1;
    }
    else if(you== 'w' && comp=='s'){
        return -1; 
    }
    if(you== 'w' && comp=='g'){
        return 1;
    }
    else if(you== 'g' && comp=='w'){
        return -1; 
    }
}

int main(){
    char you, comp;
     
    srand(time(0));
    int number = rand()%100 + 1;//--> generates a random no. between 1 and 100

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter 's' for snake 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You choosen %c and computer choosen %c.", you, comp);
    if(result== 0){
        printf("Game draw\n");
    }
    else if(result==1){
        printf("You win\n");
    }
    else{
        printf("You Loose\n");
    }
    

    return 0;
}