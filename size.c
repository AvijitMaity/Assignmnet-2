//code that prints the size of the char, int, long int, float, double data types and prints the maximum and minimum machine numbers available on//
//your computer for the char, int, long int, float, double data types.//
#include<stdio.h>
void size()
{
printf("The size of char is : %d\n",sizeof(char));
printf("The size of int is : %d\n",sizeof(int));
printf("The size of long int is : %d\n",sizeof(long int));
printf("The size of float is : %d\n",sizeof(float));
printf("The size of double is : %d\n",sizeof(double));
}
void max_min2() 
{ 
   int max = (int)pow(2.0,sizeof(int)*8);
   long int maxl = (long int)pow(2.0,sizeof(long int)*8);
   char maxc = (char)pow(2.0,sizeof(char)*8);
   long long int maxll = (long long int)pow(2.0,sizeof(long long int)*8);
   printf("max long integer %ld\n", maxl++);
   printf("min long integer %ld\n", maxl);
   printf("max integer %d\n", max++);
   printf("min integer %d\n", max); 
   printf("max character %d\n", maxc++);
   printf("min character %d\n", maxc);
   printf("max long long integer %lld\n", maxll++);
   printf("min long long integer %lld\n", maxll); 

   
    
} 
int main()
{
	size();
	max_min2();
}
