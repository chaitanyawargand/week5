#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("no.of elements in array\n");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
  
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
    	
	}
	printf("2nd largest integer is %d and 2nd minimum integer %d",a[n-2],a[1]);
	return 0;
	}
	
