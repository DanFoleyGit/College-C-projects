/*setbuff(stdout,NULL);
a program that will covert an integer into a word for the number from 1-10
Daniel Foley 10/10/17*/

#include <stdio.h>
int main()
{
    int n1=0;
    
    printf("enter a number\n");
    fflush(stdout);
    scanf("%d", &n1);
    
    if (n1==1)
        printf("\none\n");
    else if (n1==2)
        printf("\ntwo\n");
    else if (n1==3)
        printf("\nthree\n");
    else if (n1==4)
        printf("\nforu\n");
    else if (n1==5)
        printf("\nfive\n");
    else if (n1==6)
        printf("\nsix\n");
    else if (n1==7)
        printf("\nseven\n");
    else if (n1==8)
        printf("\neight\n");
    else if (n1==9)
        printf("\nnine\n");
    else if (n1==0)
        printf("\nzero\n");
    
    return 0;
}