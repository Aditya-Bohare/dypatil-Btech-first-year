#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); // it is to decide the random value with the help of time..

    int computer = (rand() % 100) + 1;
    int player;
    int attempt = 1;

    printf("Gusses Game..\n");

    do
    {
        printf("Enter a guessed number chosen by computer : ");
        scanf("%d", &player);

        if(player < computer){
            printf("choose higher number..\n");
        
        }
        else if(player > computer){
            printf("choose lower number..\n");
            
        }
        else{
            break;
        }
        attempt++;
        
    }while(player != computer);
    
    printf("You've guessed the number by %d attempt..\n",attempt);

    printf("the number is %d", computer);
    return 0;
}
