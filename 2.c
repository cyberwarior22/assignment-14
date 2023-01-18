
#include <stdio.h>
int main()
{
	int a[10];
	int i;
	int sum=0,avg=0;
	printf("enter the number of array");
	for(i=0;i<10;i++)
	{
			scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		
		 sum = sum+a[i];
		 avg=sum/10;
		 
	}
		printf("\n%d",avg);
	

}

