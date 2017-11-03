
/*program using an array*/

#include <stdio.h>
#define SIZE 11
int main()
{
	int age[SIZE];
	int i;
    int sum;
	float average;

	sum=0;
	average=0;

	printf("enter %d ages\n", SIZE); //place symbolic name here
    fflush(stdout);

	//enter ages into array
	
	for(i=0; i<SIZE; i++)   
	{
		scanf("%d", &age[i]); 
	}

    for(i=0; i<SIZE; i++) 
	{
		sum=sum+age[i];
	}
    
    //cast  a float. cant do a integer diveded by an integer.
    average = (float)sum/SIZE; 
    
    printf("%.1f", average);
    
    getchar();
    return 0;
}