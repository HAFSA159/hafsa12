#include<stdio.h>
#include<stdlib.h>

  int main()
  
{
	int score = 0;
  printf("Lets started! Good luck.\n");
  printf("What is actually electricity?. \n");
  printf("A. A flow of water. \n");
  printf("B. A flow of air. \n");
  printf("C. flow of electrons. \n");
  printf("D. A flow of atoms. \n");
  printf("you can choose your answer: ");
  
  char choice ;
  
  scanf("%s",&choice);
  
  if(choice == 'C'){
  
  score+=2;
  printf("Congratulation Your answer is correct : %d \n ", score );
  printf("You're doing great keep going! \n");
}
  else
   { 
   score-=2;
  printf("Unfortunately Your answer is wrong: %d \n ", score); 
  printf("HARD WORK! \n");
}

  printf("Which did Viking people use as money? \n");
  printf("A. Rune stones.  \n");
  printf("B. Jewellery. \n");
  printf("C. Seal skins. \n"); 
  printf("D. wool.  \n");
  printf("Please choose your answer: \n");
  
  scanf("%s", &choice);
	   
  	 if(choice == 'B')
	   {
	   	score+=2;
  	  printf("Congratulation Your answer is correct : %d \n ", score ); 
  	  printf("You're doing great keep going! \n");
      }
  	  else 
	score-=2;
  printf("Unfortunately Your answer is wrong: %d \n ", score); 
  printf("HARD WORK! \n");
  
  return 0;
}

