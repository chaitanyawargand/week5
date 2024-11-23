//Write a program in C to insert New value in the array//
#include<stdio.h>
int main()
{
    int i,k,j,t,n,flag=1;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("input the value to be inserted\n");
    scanf("%d",&k);
    int a[n];
    
    printf("enter the elements\n");
    for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);
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
 for(i=0;a[i]<k;i++)
 flag++;
 a[flag]=n;
 for(i=flag+1;i<n;i++)
 b[i+1]=a[]

