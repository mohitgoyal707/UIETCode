#include <stdio.h>

void bubble(int*,int);
int main()
{
	int i,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore Sorting the array is :\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	bubble(a,10);
	printf("\nAfter Sorting the array is :\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void bubble(int *a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				a[j] = a[j+1] + a[j] - (a[j+1] = a[j]);
		}
	}
}