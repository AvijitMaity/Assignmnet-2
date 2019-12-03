/*The stats support file for mainprog.c*/
#include<stdio.h>
#include<stdlib.h>
float* func(float arr[],int n)// a function that takes array of arbitary length 
{
	
int i ;
float* array = malloc(2* sizeof *array);
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
