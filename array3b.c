/*This program takes 100 squared numbers and prints the mean and variance using malloc*/
#include<stdio.h>
#include<stdlib.h>
float* func(float arr[],int n)// a function that takes array of arbitary length 
{
	
int i ;
float* array = (float*)malloc(2* sizeof (float));
array[0] = 0.0;
array[1] = 0.0;

for(i = 0;i<n;i++)
{
	array[0]+=arr[i];
	array[1]+=arr[i]*arr[i];
}
array[0] = array[0]/(float)n;
array[1] = array[1]/(float)n;
array[1] = (array[1] - array[0]*array[0]);
return array; //returns the mean and variance 
} 
int main(void)
{
	float *s = NULL;
	s = (float*)malloc(100 * sizeof *s);
	int i = 0;
	for(i = 0;i<100;i++)
		{printf("%d\n",s[i]);
		s[i] = (i+1)*(i+1);
	}
	
	printf("The Mean of the numbers is= %f\n",func(s,100)[0]);
	printf("The variance of the numbers is = %f\n",func(s,100)[1]);
	free(s);
}
