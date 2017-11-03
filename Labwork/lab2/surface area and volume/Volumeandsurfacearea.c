#include <stdio.h>
    int main()
    {
        float height = 10;
        float length = 11.5;
        float width = 2.5;
        float ans1 = 0;
        float ans2 = 0;
        int two = 2;
        
        //volume ans
    
        ans1 = width * height * length;
        
        printf ("Volume=%f\n", ans1);
        
        //surface area
        
        ans2 = (width * height + width *length + length * height) * two;
        
        printf ("Surface Area= %f", ans2);
        
    }