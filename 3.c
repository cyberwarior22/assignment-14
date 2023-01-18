
#include <stdio.h>
int main()
{
	int a[10];
	int i;
	int sumeven=0,sumodd=0;
	printf("enter the number of array");
	for(i=0;i<10;i++)
	{
			scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	if(a[i]%2==0)
	{
		sumeven+=a[i];
	}
	else 
	{
		sumodd=sumodd+a[i];
	}
	printf("%d\n%d",sumeven,sumodd);
}

	
