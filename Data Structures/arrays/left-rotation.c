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
    while(actualRotaions>0)
    {
        temp = arr.A[arr.length-1];
        for(i=0; i<arr.length-1; i++)
        {
            arr.A[(i+(arr.length-1))%arr.length] = arr.A[i];
        }
        arr.A[arr.length-2] = temp;
        actualRotaions--;
    }


    for(i=0; i<arr.length; i++)
    {
        printf("%d", arr.A[i]);
    }
    return 0;
}