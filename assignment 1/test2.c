#include <stdio.h>

#define MaxRounds 5
#define MinRounds 1

int main ()
    {
        char game_status;
        //int rounds;
        //int guess;
        //int ans;
        int counter;
        int num1;
        int num2;
        
        //initilase variables
        //
        game_status='_';
        //rounds=0;
        //ans=-1;
        counter=1;
        num1=1;
        num2=2;
        
        
        
        //ask the player to play
        //
        printf("\nwould you like to play a maths game? press y for yes and n for no\n");
        fflush(stdout);
        scanf("%c", &game_status);
        while(game_status != 'n'|| !game_status) {
            if (game_status == 'y') {
                printf("\nHow many rounds do you want to play? input a number between 1 and 5.\n");
                int rounds = 0;
                scanf(" %d",&rounds);
                //use you defines for your constants
                if (rounds >= MinRounds && rounds <= MaxRounds) {
                    int correctAnswers = 0;
                    for (int round = 0; round < rounds; round++) {
                        printf("\nWhat is %d+%d?\n",num1, num2);
                        int guess = 0;
                        scanf(" %d", &guess);
                        //set answer
                        int ans = num1+num2;
                        if (guess==ans)
                        {
                            printf("\ncorrect boi, have a point\n");
                            correctAnswers++;
                            //fflush(stdout);
                        }
                        else
                        {
                            printf("Wrong answer boi, the correct asnwer is %d\n", ans);
                            //fflush(stdout);
                        }
                        num1=num1+3;
                        num2=num2+7;
                    }
                    //resetting num1 and num2 between rounds
                    num1=1;
                    num2=2;
                    //print out number of correct/rounds and asking to play again y or n
                    printf("\You scored %d/%d \nDo you want to play again? y or n?\n",correctAnswers,rounds);
                    scanf(" %c", &game_status);
                } else {
                    //tell user error
                    //come back here for loop
                    //printf("\nmark is gay lol\n");
                    printf("\nWrong input, do you want to try again? Enter y or n:\n");
                    scanf(" %c", &game_status);
                }
            } else {
                printf("\nThanks for playing!");
                break;
            }
        }
        return 0;
    }