/*this is a maths game that has a menu to play the game. If the player chooses to play
the computer will ask how many rounds it wants to play between 1 and 5 rounds. 
The computer will then ask up to 5 different questions and score the user out of 
the amount of questions they choose to play. Then the computer will ask if they want 
to play again and will give them the same 5 qustions.

Daniel Foley 31/10/17
*/
#include <stdio.h>

#define MAXROUNDS 5
#define MINROUNDS 1
#define INCREMENT1 3
#define INCREMENT2 5

int main ()
{
    //initialise variables
    //
    char game_status;
    int num1;
    int num2;
    int roundnum;
    int success;
    int correct_answers;
    int cur_round;
    int guess;
    int ans;
    
    game_status='_';
    num1=1;
    num2=2;
    roundnum=0;
    success=0;
    correct_answers=0;
    cur_round=0;
    ans=0;
    guess=0;
    
    
    //ask the player to play
    //
    printf("\nDaniel Foleys maths game 31/10/17\n\n");
    printf("\nwould you like to play a maths game? press Y for yes and N for no\n");
    fflush(stdout);
    scanf("%c", &game_status);
    
    //check what the game status is to play or not
    //while game status is not n or blank..
    //
    while(game_status == 'y'|| game_status != ' ') 
    {
        //error checking for yes and no input
        //
        if(game_status=='y' || game_status=='n' ||game_status=='Y' || game_status=='N')
        {
                if (game_status == 'y' ||game_status=='Y') 
                {
                    printf("\nHow many rounds do you want to play? input a number between 1 and 5.\n");
                    //Success will be incremented if the scanf is successful
                    //
                    success=scanf(" %d",&roundnum);
                    
                    //use symbolic names to error check for round parameters
                    //and if success was incremented, if not then go to error message
                    //
                    if (success==1 && roundnum >= MINROUNDS && roundnum <= MAXROUNDS) 
                    {
                        //loop to track rounds specified to the current round
                        //
                        for (cur_round = 0; cur_round < roundnum; cur_round++)
                        {
                            //read in first guess
                            //
                            printf("\nWhat is %d+%d?\n",num1, num2);
                            scanf(" %d", &guess);
                            //initialise local variable ans, set answer
                            //
                            ans = num1+num2;
                            //if the answer is right...
                            //
                            if (guess==ans)
                            {
                                printf("Correct, have a point.\n");
                                correct_answers++;
                            }
                            else//wrong answer...
                            {
                                printf("Wrong answer, the correct asnwer is %d.\n", ans);
                            }
                            num1=num1+INCREMENT1;
                            num2=num2+INCREMENT2;
                        }
                        //resetting num1 and num2 between games
                        //
                        num1=1;
                        num2=2;
                        //print out number of correct/rounds and asking to play again y or n
                        //
                        printf("\nYou scored %d/%d \nDo you want to play again? y or n?\n",correct_answers,roundnum);
                        scanf(" %c", &game_status);
                    }
                    else
                    {
                        printf("Input error, a number was not entered.\n");
                        flushall();
                    }
                }
                else //breaks out of loop, user shouldnt see the message as it will close
                {
                    printf("\nThanks for playing!");
                    break;
                }
        }    
        else//y or n error checking else
        {
            game_status='_';
            printf("\nInput error, please enter Y for yes and N for no.\n");
            scanf(" %c", &game_status);
        }
    }
    return 0;
}