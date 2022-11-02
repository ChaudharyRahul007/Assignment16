/*3. Write a program in C to find the transpose of a given matrix.*/
#include<stdio.h>
int main()
{
int A[3][3],B[3][3],C[3][3];
int i,j;
printf("Enter 9 number :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&A[i][j]);
    }
}
printf("metrices elements :\n");
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
        B[j][i] = A[i][j];
    }
}
printf("Transpose matrices :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",B[i][j]);
    }
    printf("\n");
}
return 0;
}

