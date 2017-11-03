#include <stdio.h>
/*a program to Ask the user to enter 3 numbers and 
display these on separate lines. Daniel FOley 3/10/17*/

    int main()
{   
    //intiialise variables
    int num1 =0;
    int num2 =0;
    int num3 =0;
    int num4 =0;
    //scan for first number
    printf ("Please enter a whole number\n");
    scanf ("%d", &num1);
    //scan second number
    printf ("Please another whole number\n");
    scanf ("%d", &num2);
    //scan third number
    printf ("Please enter a final whole number\n");
    scanf ("%d", &num3);
    //display numbers
    printf ("\nnum1%d",num1);
    printf ("\n\nnum2%d", num2);
    printf ("\n\nnum3%d", num3);
    
    printf ("\nPlease enter a 0 to end\n");
    scanf ("%d", &num4);
    
    
    getchar ();
    return 0;
    
}
    
    
    