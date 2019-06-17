#include <stdio.h>
#include <stdlib.h>



int main(void){

	int nbr_mystere = 0;
	int guess = 0;
	time_t t;
   
   	 /* Intializes random number generator */
   	srand((unsigned) time(&t));
	//printf("%d\n",rand());


	nbr_mystere =10;
	//nbr_mystere = rand();
	//printf("%d\n",nbr_mystere);

  //	printf("Enter a number : \n");
	//scanf("%d",&guess);
//	printf("Guess : %d\n",guess);

	while(1){
  		printf("Enter a number : \n");
		scanf("%d",&guess);
		printf("Guess : %d\n",guess);
		if(guess == nbr_mystere){

			printf("You won\n");
			exit(0);

		}	 	

		else{
			if(guess<nbr_mystere){
				printf("More\n");
			}	
			else{
				printf("Less\n");
			}	
 
		}	
	}

















	return 1;
}
