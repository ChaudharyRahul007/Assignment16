/*2. Write a program to calculate the product of two matrices each of order 3x3.*/
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3];
    int i,j,k,sum=0;
    printf("Enter 9 numbers for first metrix :\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter 9 numbers for second metrix :\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("products of  metrices : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            sum=sum+A[i][k]* B[k][j];
            C[i][j]=sum;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}