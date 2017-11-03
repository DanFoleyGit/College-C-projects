/*program to enter and display 2 char. The program will only do characters and display*/
#include <stdio.h>
int main()
{   
    //intiialise variables
    char ch1;
    char ch2;
    
    printf("Please two letters\n");
    fflush(stdout);
    
    //scan characters
    scanf("%1s", &ch1);
    scanf("%1s", &ch2);
    flushall();
    
    //display characters
    printf ("\n %c",ch1);
    printf ("\n %c", ch2);
    
    
    return 0;
    
}