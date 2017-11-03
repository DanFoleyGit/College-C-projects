/*Write a C program that will input a positive integer value, and compute the following
sequence:

if the number is even, halve it
if the number is odd, multiply by 3 and add 1.

Repeat this process until the value is 1, displaying each value. Finally display how
many of these operations you performed. 
Daniel Foley 17/10/17*/

#include <stdio.h>

int main()
{
    int num;
    int counter;
    
    num=0;
    counter=0;
    
    printf("enter a number\n");
    fflush(stdout);
    scanf("%d", &num);
    
    while (num!=1)
    {
        if (num%2==0)
        { 
            num=num/2;
            printf ("Next value is %d\n",num);
            counter++;
        }
        else 
        {
            num=(num*3) +1;
            printf ("Next value is %d\n",num);
            counter++;
        }
    }
    
    printf ("\nnumber of times this process was completed %d\n\n", counter);
    
    return 0;
}
        
        
    
    