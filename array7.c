#include<stdio.h>
	int main()
	{
	int n,i,k,c=0;
	printf("no.of elements in array\n the k is \n");
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     for(i=0;i<n;i++)
    {
    	if(a[i]==k)
    	{
    		c++;
		}
    	
	}
	printf("%d",c);
	return 0;
}
