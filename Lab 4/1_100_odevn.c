/*this program is to check if a number entered is odd or even between 1 and 100
by Daniel Foley 10/10/17*/

#include <stdio.h>

int main()
    {
        int num=0;
        
        printf("Enter a number between 1 and 100\n\n");
        fflush(stdout);
        
        scanf("%d", &num);
        
        if(num%2==0)
        {
            printf("number entered is even\n\n");
        }
        
        if(num%2==1)
        {
            printf("number is odd\n\n");
        }
        
        return 0;
    }