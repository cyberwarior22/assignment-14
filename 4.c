#include<stdio.h.>
int main()
{
	int a[5],max=0,i;
	printf("enter value of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d",max);
	
	
}
