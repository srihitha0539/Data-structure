#include<stdio.h>
//*
//*8 1 7 2 6 3 5 10
//0  1  2 3 4 5 6 7
//*
void merge(int*arr,int l,int m,int h)
{
	int i,j,n1,n2,a[100],b[100],k;
	n1=m-1;
	n2=h-m;
	k=1;
	for(i=0;i<n1;i++)
	{
	     a[i]=arr[l++];	
    }
	k=m+1; 
    for(i=0;i<n2;i++)
    {
    	b[i]=arr[k++];
	}
	i=0,j=0;
	k=1;
    while(i<n1 && i<n2)
    {
       if(a[i]<b[j])
	   {
	   	  arr[k++]=a[i++];
       }
	   else
	   {
	   	  arr[k++]=b[j++];
	   }	
	}
}

void merge_sort(int *arr,int n)
{
	int p,i,j,l,h,m;
	for(p=2;p<n;p=p*2)//2 4 8 16....
	{
	   for(i=0;i<p;i=i+p)
	   {
	   	  
	      l=i;
	      h=1+p-1;
	      m=(l+h)/2;
	      if(h<=n)
	        merge(arr,l,m,h);
	   	
	   }
	}
}


void main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++);
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,n);//fun call merge
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
