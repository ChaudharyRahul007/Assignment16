/*7. Write a program in C to print or display the lower triangular of a given matrix*/
#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    printf("Enter 9 numbers :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Metrices....\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
       printf("%d\t",A[i][j]);
      }
      printf("\n");
    }
    printf("Lower trigular :\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        if(i>j)
        printf("%d ",A[i][j]);
      }
    }
    return 0;  
}
