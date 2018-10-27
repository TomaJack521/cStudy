//This file is written by Runyu Zhang(Jack)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};
int rollDice(void);

int main(void){
    int point;
    int sum;
    enum Status gameStatus;
    srand(time(NULL));

    sum = rollDice();

    if(sum == 7 || sum == 11){
        gameStatus = WON;
    }else if(sum == 2 || sum == 3 || sum == 12){
        gameStatus = LOST;
    }else{
        gameStatus = CONTINUE;
        point = sum;
        printf("The point is %d\n", point);
    }

    while(CONTINUE == gameStatus){
        sum = rollDice();

        if(sum == point){
            gameStatus = WON;
        }else if(sum == 7){
            gameStatus = LOST;
        }else{
            gameStatus = CONTINUE;
        }
    }

    if(gameStatus == WON){
        puts("Players win");
    }else{
        puts("House win");
    }
}

int rollDice(void){
    int Dice1, Dice2;
        
    Dice1 = rand()%6 + 1;
    Dice2 = rand()%6 + 1;
    Dice1 = Dice1 + Dice2;

    printf("Player roled %d\n", Dice1);
    return Dice1;
}