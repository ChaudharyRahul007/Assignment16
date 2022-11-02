/*10. Write a program in C to find the row with maximum number of 1s*/
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter 9 numbers :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Metrices..\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}