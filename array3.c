	#include<stdio.h>
	int main()
	{
	int n,i,j,t,sum=0;
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
			if(a[j+1]>a[j])
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
	return 0;
}
