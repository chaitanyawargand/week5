/*Let us write a program to find average marks obtained by a class of 30
students in a test.*/
#include<stdio.h>
int main()
{
    int marks[4],i,sum=0;
    float avg;
    for(i=0;i<4;i++)
    {
        printf("enter the marks\n");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<4;i++)
    {
        sum+=marks[i];
     } 
     avg=sum/4;

     printf("%f",avg);

     return 0;

}
