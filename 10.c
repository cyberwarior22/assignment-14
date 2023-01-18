
#include<stdio.h>
int main()
{
	int i,j;
	int a[5];
	int a2[5];
	printf("enter the value of array");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<5;i++)
	{
		a2[i]=   a[i];
	}
	
	for(i=0;i<5;i++)
	{
	printf("\n%d",a2[i]);	
	}
	
}
