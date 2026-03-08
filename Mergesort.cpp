#include<stdio.h>
void merge(int a[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=0;
	int temp[high-low+1];
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=a[j];
			j++;
		    k++;
		}
	}
	if(j>high)
	{
		while(i<=mid)
		{
			temp[k]=a[i];
			i++;
			k++;
		}
	}
	else
	{
		while(j<=high)
		{
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	for(i=low,k=0;i<=high;i++,k++)
	{
		a[i]=temp[k];
	}
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main()
{
	int n;
	printf("\n enter n size:");
	scanf("%d",&n);
	int a[n],i;
	printf("\n enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("\nAfter sorting");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i<n-1)
		{
			printf(",");
		}
	}
	printf("]");
	return 0;
}
