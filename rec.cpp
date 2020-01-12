#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	float total=0.0;
	int a[10];
	float average;
	int negative_sum=0,positive_sum=0;
	while(1)
	{
	
	printf("\nenter the value of n\n");
	scanf("%d",&n);
	printf("enter the +ve or -ve numbers you want to add\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("you enter these numbers\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			negative_sum=negative_sum+a[i];
		}
		else if(a[i]>0)
		{
			positive_sum=positive_sum+a[i];
		}
		else if(a[i]==0)
		{
			;
		}
		total=total+a[i];
	}
	average=total/n;
	printf("\nsum of all negative number is %d",negative_sum);
	printf("\nsum of all positive number is %d",positive_sum);
	printf("\naverage of all number is %f",average);
}
}
