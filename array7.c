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
int main(void)
{
	float *s = NULL;
	s = (float*)malloc(100 * sizeof *s);
	int i = 0;
	for(i = 0;i<100;i++)
		{s[i] = (i+1)*(i+1);}
	FILE *fs;
	 fs = fopen( "file3.bin" , "wb" );
	 float* str = func(s,100);
    fwrite(str , 4 , sizeof(float) , fs );
   fclose(fs);
   FILE *os;
	 os = fopen( "C:/Users/USER/Documents/C Assignment-2/file3.bin" , "rb" );// path must be changed to local location for working of the program
	 float* out;
    fread(out , 4 , sizeof(float) , os );
   
   printf("mean = %f",out[0]);
   printf("\nvariance = %f \n",out[1]);
fclose(os);
	free(s);
}
