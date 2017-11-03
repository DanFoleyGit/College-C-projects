/* Write a program that asks the user to enter a number between 1 - 5. Your program
should display all the numbers between 1 - 20 that are evenly divisible by this
number. You will need to use a loop. (Tricky question - think first and design your
solution. Don't hack code !!). */

#include <stdio.h>

int main()
{
    int num;
    int counter:
    num=0;
    counter=1;
    
    do
    {
        printf("enter a number between 1 and 5\n");
        fflush(stdout);
        while (num<0 && num>6);
        {
        scanf ("%d", &num);
        }
        
        
    while (counter<21)
    {
        