#include<stdlib.h>
#include<stdio.h>

int main()
{
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    int *B[3];
    int **C;
    int i,j;
    for(i=0;i<3;i++)
        B[i] = (int *)malloc(4*sizeof(int));
    C = (int **)malloc(3*sizeof(int *));
    for(i=0;i<3;i++)
        C[i] = (int *)malloc(4*sizeof(int));
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]: %d\n", i, j, A[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("B[%d][%d]: %d\n", i, j, B[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("C[%d][%d]: %d\n", i, j, C[i][j]);
        }
    }
    return 0;
}

