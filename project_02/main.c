#include<stdio.h>
#include<stdlib.h>
#include<time.h> // Added missing header for time()

int main()
{
  srand(time(0));
  int player, computer = rand() % 3;
  /*
   0 ----> snake
   1 ----> water
   2 ----> Gun
   */
  printf("choose 0 for snake , 1 for water and 2 for Gun \n");
  scanf("%d", &player);
  printf("Computer chose: %d\n", computer); // Improved output for clarity

  if (player == 0 && computer == 1){ 
    printf("You win\n"); // Fixed incorrect logic
  }
  else if(player == 0 && computer == 2){
    printf("You lose\n");
  }
  else if(player == 0 && computer == 0){
    printf("It's a Draw\n");
  }
  else if(player == 1 && computer == 0){
    printf("You lose\n"); // Fixed logic
  }
  else if(player == 1 && computer == 1){
    printf("It's a Draw\n");
  }
  else if(player == 1 && computer == 2){
    printf("You win\n"); // Fixed missing semicolon
  }
  else if(player == 2 && computer == 1){
    printf("You win\n"); // Fixed logic
  }
  else if(player == 2 && computer == 0){
    printf("You lose\n");
  }
  else if(player == 2 && computer == 2){
    printf("It's a Draw\n");
  }
  else {
    printf("Invalid input. Please choose 0, 1, or 2.\n");
  }

  return 0;
}
