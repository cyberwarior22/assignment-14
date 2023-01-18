#include<stdio.h.>
int main()
{
	int a[5],i;
	printf("enter value of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[1000];
	for(i=0;i<5;i++)
	{
		
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
	
	
}
 
