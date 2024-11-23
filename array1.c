#include<stdio.h>
int main()
{
	int n,i,j,t,sum=0,k,l;
	float avg;
	printf("no.of elements in array\n");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(k=0;k<n;k++)
    {
    	sum+=a[k];
    	
	}
	avg=sum/n;
	for(l=0;l<n-1;l++)
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
	for(k=0;k<n;k++)
    {
    	printf("%d",a[k]);
    	
	}
	printf("maximum integer is %d and minimum is %d and avg of integer is %f",a[n-1],a[0],avg);
	
	return 0;
	
}
