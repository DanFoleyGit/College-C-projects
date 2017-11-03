#include <stdio.h>
/*inputting 3 floats with decimal places and limiting the the number of decomal places o .5 , 0.3 and none
Daniel Foley 3/10/17*/
int main ()
{
    //variables
    float f1= 0;
    float f2= 0;
    float f3= 0;
    
    //ask for numbers
    printf("enter 3 numbers with up over 5 decimal places\n",f1,f2,f3);
    fflush(stdout);
    
    scanf("%f",&f1);
    scanf("%f",&f2);
    scanf("%f",&f3);
    
    //spacing
    printf("\n");
    
    printf("%.5f",f1);
    printf("\n");
    printf("%.3f",f2);
    printf("\n");
    printf("%.0f\n",f3);
    
    
    return 0;
}