/*9. Write a program in C to accept a matrix and determine whether it is a sparse matrix*/
#include <stdio.h>
int main()
{
    int A[3][3], i, j, count = 0;
    printf("Enter 9 numbers :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Metrices....\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] == 0)
                count++;
        }
    }
    if (count >= (3 * 3) / 2)
    {
        printf("Metrices is sparse :\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Metrices is not sparse :\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
