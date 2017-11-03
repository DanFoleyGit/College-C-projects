#include <stdio.h>
/*program to calculate and displat the sum of the integers 1 to 5 and
calculate and display the average of the following 1.0, 1.1..... 2.0
by Daniel Foley 26/9/17*/

    int main()
    {
    //initliase integers 1-5
    
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int sum = 0;
        
    // add integers
        
    sum = num1 + num2 + num3 + num4 + num5;
        
    printf ("numbers added 1-5 = %d", sum);
        
    //initilise floats
    
    float numone0 = 1.0;
    float numone1 = 1.1;
    float numone2 = 1.2;
    float numone3 = 1.3;
    float numone4 = 1.4; 
    float numone5 = 1.5;
    float numone6 = 1.6;
    float numone7 = 1.7;
    float numone8 = 1.8;
    float numone9 = 1.9;
    float numtwo0 = 2.0;
    float sum2 = 0.0;
    float sum3 = 0.0;
    int eleven = 11;
  
    
    
    //add floats  and divide by 11
    
    sum2 = numone0 + numone1 + numone2 + numone3 + numone4 + numone5 + numone6 + numone7 + numone8 +numone9 + numtwo0;
    
    //divide by 11
    
    sum3 = sum2 / eleven;
    
    printf ("\naverage of the following 1.0, 1.1..... 2.0 = %f", sum3);
    
    }
    
    