/*. Using a loop, display all the even numbers from 1 - 100, separated by commas (Hint:
use the modulus operator, i.e. % )*/

#include <stdio.h>

int main()
{ 
    int num;
    
    for (num=1; num<101; num++)
    {
        if (num%2==0)
        {
            printf("%d,",num);
        }
    }
    return 0;
}