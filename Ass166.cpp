/*6. Write a program in C to find the sum of rows and columns of a Matrix.*/
#include<stdio.h>
int main()
{
    int A[3][3];
    int i,j,sum[10]={0};
    printf("Calculate  to sum of rows :\n");
    printf("Enter 9 numbers :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    } 
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i]=sum[i]+A[i][j];
        }
    } 
    printf("Metrices...:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("%d\n",sum[i]);
    } 
    return 0;
}