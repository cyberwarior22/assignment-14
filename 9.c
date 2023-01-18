//Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.

#include<stdio.h>
int main()
{
	int i;
	int a[5];
	printf("enter the value of array");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	////////
	for (i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
	
}

