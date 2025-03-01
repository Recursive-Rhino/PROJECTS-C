#include <stdio.h> 
#include<stdlib.h>//for rand function
#include<time.h>// for seeding the random number generator
int main() {
  srand(time(NULL));// Seed the random number generator with the current time
  int random,Guess;
  printf("\n");
  printf("\n");
  printf("|| HELLO EVEYONE , WELCOME TO THE NUMBER GUESSING GAME ||  \n\n");
  random = rand() % 100  + 1;//generating number between(1-100) 
  do {
    printf("\nEnter your Guess between(1- 100) : ");
    scanf("%d",&Guess);
    // FOR HINT 
    if(Guess>random) {
      printf("\nThe number you entered is Greater then the Desired number...\n\n Guess Again !\n");
    } else if (Guess<random) {
      printf("\nThe number you entered is Less then the Desired number ...\n\n Guess Again !\n");
    } else 
    {
      printf("\nCongratulation !! , You Guessed it right , the number is %d",random);
    }
  } while(Guess!= random);
  printf("\n\nBye Bye Thanks for Playing ...\n\n");
  printf("\n\n|| Developed By Smruti Ranjan Nayak ||\n\n");
  return 0;
}