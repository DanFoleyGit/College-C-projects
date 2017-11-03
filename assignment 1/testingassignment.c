#include <stdio.h>

int main ()
    {
        char game_status;
        int rounds;
        int guess;
        int ans;
        int counter;
        int num1;
        int num2;
        
        //initilase variables
        //
        game_status='_';
        rounds=0;
        guess=0;
        ans=-1;
        counter=1;
        num1=1;
        num2=2;
        
        
        
        //ask the player to play
        //
        printf("\nwould you like to play a maths game? press y for yes and n for no\n");
        fflush(stdout);
        do
        {
            scanf("%c", &game_status);
            
            //if the user says yes
            //begin the game
            //
            if (game_status=='y')
            {
                printf("\nHow many rounds do you want to play? input a number between 1 and 5.\n");
                scanf(" %d",&rounds);
                
                //question and increment rounds
                //
                rounds++;
                for (counter=1; counter<rounds; counter++)
                {
                    printf("\nWhat is %d+%d?\n",num1, num2);
                    scanf(" %d", &guess);
                    //set answer
                    //
                    ans=num1+num2;
                    //if else statement
                    //
                    if (guess==ans)
                    {
                        printf("\ncorrect boi, have a point\n");
                        fflush(stdout);
                    }
                    else
                    {
                        printf("Wrong answer boi, the correct asnwer is %d\n", ans);
                        fflush(stdout);
                    }
                    //resetting answer to 0 and incrementing numbers
                    //
                    ans=0;
                    num1=num1+3;
                    num2=num2+7;
                }
                //resetting num1 and num2 between rounds
                //
                num1=1;
                num2=2;
            }
            
            //if the user says no
            //
            if (game_status=='n')
            {
                printf("end");
                break;
            }
            game_status=' ';
            printf("\n\ndo you wnat to play agin\n");
            scanf("%c", &game_status);
        } 
        while(game_status !='n' ||' ');
        
        return 0;
    }