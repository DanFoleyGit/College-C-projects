/*ch 5 question 2, not finished, didnt have to finish as wasnt done in lectures
Daniel Foley 10/10/17*/

#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    
    printf("enter your first number\n");
    fflush(stdout);
    scanf("%d", &n1);
    printf("enter your second number\n");
    fflush(stdout);
    scanf("%d", &n2);
    printf("enter your third number\n");
    fflush(stdout);
    scanf("%d", &n3);
    
    if(n1 == n2) 
        if (n1== n3)
            printf ("n1, n2 and n3 have the same value\n");
            else
                printf ("n1 and n2 have the same value\n");
    else if (n1 == n3)
        printf("n1 and n2 have the same value\n");
        else if (n2 ==n3)
            printf("n2 and n3 have the same value");
                else 
                    printf("n1, n2 and n3 have different values");
        
        return 0;
    }