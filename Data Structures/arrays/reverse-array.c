#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int length;
};

void display(struct Array arr)
{
    int i;
    for(i = 0; i<arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void reverseArray(struct Array *arr)
{
    int i, temp;
    int n = arr->length;
    for(int i = 0; i<n/2; i++)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[n-1-i];
        arr->A[n-1-i] = temp;
    }
    
}
int main()
{
    struct Array arr;
    int n, i;
    scanf("%d", &arr.length);
    n = arr.length;

    arr.A = (int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    display(arr);

    reverseArray(&arr);
    printf("\n");
    display(arr);
}