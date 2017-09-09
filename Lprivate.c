#include<stdio.h>
#include<omp.h>

void main()
{

	int i=3, n;
	omp_set_num_threads(1); 
	#pragma omp parallel for lastprivate(i)
	
		for(n=1; n<5; n++)
		{
			printf("In loop 'i' is = %d \n", i);
			i=i+2;
   		}
	
	printf("Out of loop 'i' is = %d \n", i);
}
