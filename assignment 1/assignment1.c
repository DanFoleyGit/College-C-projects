/* 
Program to
Requirements:
You are required to develop a program that will simulate a mathematics quiz game.
The game will include various features, each of which must be incorporated into your
program.
Your program should be menu-driven and must display a main menu when run. The
menu should include the following options:
1. Enter the number of questions to be asked for this round of the quiz
(maximum of 5 questions allowed).
2. Start quiz
3. Display the number of questions that were answered (i) correctly and (ii)
incorrectly for this round.
4. Exit Program
Features to	include:
1. Your program should continually run and re-display the main menu after each
option has completed, i.e. start over again. Only when the customer enters
option 4 (i.e. Exit Program), should your program terminate.
2. For option 2, your program should display a simple mathematical question and
ask the user to enter the answer. After the user has entered their answer, your
program should display the correct answer beside the user's answer. Your
program should then ask the next question (if there are more to ask) and
continue this sequence.
 For example:
 Question 1: 9 / 3 + 6 = ?
 6
 You entered: 6 - Wrong !! The correct answer: 9
3. Option 3 should only be allowed to be selected after the user selects option 2
(plays the quiz). If the user starts a new quiz, option 3 should be reset from the
previous round (i.e. Do not count correct & incorrect answers for all rounds).
4. Try to take account of input errors by the user and display appropriate error
messages.
Author: Daniel Foley
Date:
*/

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