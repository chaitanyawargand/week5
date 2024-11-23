#include<stdio.h>
int main()
{
    int i,j,k,t,n,flag=0;
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
        {   if(a[j]>a[j+1])
           { t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
           }
        }
    }
    int b[(n+1)];
    for(i=0;i<n;i++)
    {
       if(a[i]<k)
       {b[i]=a[i];
       flag++;}
    }
    b[flag]=k;
    for(i<(n+1);i>flag;i--)
    {
        a[i]=a[i+1];
    }

    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
    

}
        