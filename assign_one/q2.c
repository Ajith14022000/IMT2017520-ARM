#include<stdio.h>

int large(int arr[])
{
   int out = arr[0];
   for(int i =1;i<15;i++)
   {
   	if(arr[i] > out)
   	{
   		out = arr[i];
   	}
   }
   return out;
}
int main()
{
printf("Please  Enter the 15 numbers that you want to compare:\n");
int arr[15] ={};
  for(int i =0;i<15;i++)
  {
  	int temp;
  	scanf(" %d",&temp);
  	arr[i] = temp;
  }
  printf("Largest number among 15 numbers is %d\n",large(arr));
  return 0;
}
