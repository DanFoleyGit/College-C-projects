/*setbuff(stdout,NULL);
a program that will covert an integer into a word for the number from 1-7 to a day of the week, if its not 1 to 7 then 
give an error msg
Daniel Foley 10/10/17*/

#include <stdio.h>
int main()
{
    int n1=0;
    
    printf("enter a number\n");
    fflush(stdout);
    scanf("%d", &n1);
    
    if (n1==1)
        printf("\nMonday\n");
    else if (n1==2)
        printf("\nTuesday\n");
    else if (n1==3)
        printf("\nWednesday\n");
    else if (n1==4)
        printf("\nThursday\n");
    else if (n1==5)
        printf("\nFriday\n");
    else if (n1==6)
        printf("\nSaturday\n");
    else if (n1==7)
        printf("\nSunday\n");
    else if (n1 >7)
        printf("\nerror\n");
    
    return 0;
}