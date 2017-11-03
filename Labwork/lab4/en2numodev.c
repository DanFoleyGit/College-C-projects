/*read in 2 integers and check to see if the first integer was divisable by the second
Daniel Foley 10/10/17*/

#include <stdio.h>
int main()
{
    int num1=0;
    int num2=0;
    int ans=0;
    
    printf("enter a number to a number to be divided\n");
    fflush(stdout);
    scanf("%d", &num1);
    
    printf("\nenter a number to divide into your first numer\n");
    fflush(stdout);
    scanf("%d", &num2);
    
    ans= num1%num2;
    
    if(ans%2==0)
        printf("the first nuber is evenly divisable by the second\n");
    if(ans%2==1)
        printf("the first nuber is not evenly divisable by the second\n");
    return 0;
}
    
    