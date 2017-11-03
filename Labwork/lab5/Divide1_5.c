/* Write a program that asks the user to enter a number between 1 - 5. Your program
should display all the numbers between 1 - 20 that are evenly divisible by this
number. You will need to use a loop. (Tricky question - think first and design your
solution. Don't hack code !!). */

#include <stdio.h>

int main()
{
    int num;
    int div;
    
    
    num=0;
    div=1;
    
    printf("enter a number between 1 and 5\n");
    fflush(stdout);
    do
    {
        scanf ("%d", &num);
        if(num<1 || num>5)
        {
            printf("error boi\n");
        }
        
    }
    while (num<1 || num>5);
        
    flushall();
    while (div<21)
    {
        if (div%num==0)
        {
            printf("%d,",div);
            div++;
        }
        else
        {
            div++;
        }//end else
    }
    return 0;
}
        
        
    