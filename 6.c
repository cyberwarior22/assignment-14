#include<stdio.h>
int main()
{
	int a[6]={4,5,7,1,8,3};
	int i,j,temp;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<7;i++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
}
