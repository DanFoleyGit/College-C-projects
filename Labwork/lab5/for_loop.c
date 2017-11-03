/*Write a program using a while loop to display the numbers 1 - 10 in descending order
on the same line and each number separated by a comma (e.g. 10,9,8,7,6,5,4,3,2,1).
Daniel Foley 17/10/17*/

#include <stdio.h>

int main()
{
    int num;
    
    num=10;
    
    do
    {
        if(num!=1)
        {   
            printf("%d,", num);
            num--;
        }
        
        else
        {
            printf("%d", num);
            num--;
        }
    }
    while (num>0);
        
}
        