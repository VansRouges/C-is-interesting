#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int randomNum, userGuess, tries=1;
    //generating the random number
    srand(time(0));
    randomNum= 1+(rand()%100);
    printf("THE GUESSING GAME\n");
    do{
    printf("Guess a number from 1 to 100\nyou have 10 chances:");
    scanf("\n%d",&userGuess);
    if(tries>10){
    printf("you have exhausted your number of chances");
    break;
    }
    if(userGuess>100){
    printf("You are out of range!!!\n");
    tries++;
    }
    else if(userGuess>randomNum){
    printf("Try again, your guess is too high!\n");
    tries++;
    }
    else if(userGuess<randomNum){
    printf("your guess is too low!\n");
    tries++;
    }
    else{
    printf("Congratulations, you guessed right in %d attempts!!\n", tries);
    }
    }
    while(userGuess!=randomNum);
    return 0;
}