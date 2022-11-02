/*1. Write a program to calculate the sum of two matrices each of order 3x3*/
#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3],i,j;
    printf("Enter first metrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second metrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}