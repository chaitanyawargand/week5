/*Write a program in C for a 2D array of size 3x3 and print the matrix.
22. Write a program in C for addition and subtraction of two Matrices of same size.
23. Write a program in C for multiplication of two square Matrices.*/

#include<stdio.h>
int main()
{
    int n,i,j;;
    printf("enter the size of matrx\n");
    scanf("%d",&n);
    int a[n][n];
      printf("first matrix\n");
    for(i=0;i<n;i++)
    {  for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
    }
    int b[n][n];
     printf("second matrix\n");
    for(i=0;i<n;i++)
    {  for(j=0;j<n;j++)
       scanf("%d",&b[i][j]);
    }
    int c[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    
}