/*Write a program that counts from one to ten, prints the values on a separate line for
each, and prints a message stating "This number is three" and "This number is seven"
when the count is 3 and when the count is 7 respectively.*/

#include <stdio.h>

int main()
{
    int num;
    
    for (num=1; num<11; num++)
    {
        if (num==3)
        { 
            printf("this is number three\n");
            num++;
        }
        if (num==7)
        { 
            printf("this is number seven\n");
            num++;
        }
        else
        {
            printf("%d\n",num);
        }
    }
    
    return 0;
}