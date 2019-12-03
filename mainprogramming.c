/*This program shows the way of breaking up programs in three files and compiling them together to produce complete results
The files are:
mainprogramming.c --> The main running file
function.c --> The support file
headerfile.h --> The header file for stats
The CMD command that we used here is
gcc mainprogramming.c function.c headerfile.h -o main
will create a main.exe file to run the program
*/
#include<stdio.h>
#include<stdlib.h>
#include "headerfile.h"
int main(void)
{
float *s = NULL;
	s = (float*)malloc(100 * sizeof *s);
	int i = 0;
	for(i = 0;i<100;i++)
		{s[i] = (i+1)*(i+1);}
	printf("The Mean of the numbers is= %f\n",func(s,100)[0]);
	printf("The variance of the numbers is = %f\n",func(s,100)[1]);
	free(s);
}
