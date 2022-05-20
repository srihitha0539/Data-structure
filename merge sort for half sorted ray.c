//merge sort for half sorted array
#include<stdio.h>
void merge(int *arr,int n)
{
	int i,j,m,h;
	int a[100],b[100],k;
	l=0;
	h=n-1;
	m=(l+h)/2;
	for(i=l;i<=m;i++)
	{
	    a[k++]=arr[i];	
	}
	k=0;
	for(i=m+1;i<=h;i++)
	{
		b[k++]=arr[i];
	}
	for(i=m+1;i<=h;i++)
	{
		
	}
	while(i<n)
	{
		if()
	}
}
































void main()
{
	int arr[100],i,n,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge(arr,n);//fun call merge
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);##
	}
}
