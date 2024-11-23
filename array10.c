#include<stdio.h>
int main()
{
    int n,i,j;
     printf("enter the number of element\n");
    scanf("%d",&n);
      int a[n];
      printf("enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);

      for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
           if(a[i]==a[j])
           {j,.
            printf("%d",a[i]);
            break;
           }
        }
      }
      return 0;
}