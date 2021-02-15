#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int length;
};

int main()
{
    struct Array arr;
    int left_rotations, i, temp, actualRotaions, swap;

    scanf("%d %d", &arr.length, &left_rotations);
    arr.A = (int *)malloc(arr.length*sizeof(int));

    for(i=0; i<arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    actualRotaions = left_rotations%(arr.length);

    for(i=0; i<arr.length; i++)
    {
        printf("%d ", arr.A[(i + actualRotaions)%arr.length]);
    }

    return 0;
}