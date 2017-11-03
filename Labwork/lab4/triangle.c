/*ch 5 question 5, not finished, to see if any 2 sides added together is greater than the 
third
Daniel Foley 10/10/17*/

#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    
    printf("enter your first side\n");
    fflush(stdout);
    scanf("%d", &n1);
    printf("enter your second side\n");
    fflush(stdout);
    scanf("%d", &n2);
    printf("enter your third side\n");
    fflush(stdout);
    scanf("%d", &n3);
    
    if (n1+n2>n3)
        if (n1+n3>n2)
           if (n2+n3>n1)
               printf("can form a triangle\n");
    else if (n1+n2<n3);
        else if (n1+n3<n2);
            else if (n2+n3<n1);
                printf("can not form a triangle\n"); 
    return 0;
        }