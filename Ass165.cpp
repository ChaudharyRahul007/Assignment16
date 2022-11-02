/*5. Write a program in C to find the sum of left diagonals of a matrix.*/
#include<stdio.h>
int main()
{
    int A[3][3];
    int i,j,sum=0;
    printf("Calculate of left Diagonals of metrix :\n");
    printf("Enter 9 numbers :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    } 
    printf("Metrices:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    } 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            sum=sum+A[i][j];
        }
    } 
    printf("Diagonal of metrices sum = %d",sum);
    return 0;
}