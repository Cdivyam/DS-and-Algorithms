#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("Elements are: \n");

    for(i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

void Append(struct Array *arr, int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index >= 0 && index <= arr->length && arr->length < arr->size)
    {
        for(i=arr->length; i>index; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
}

void Delete(struct Array *arr, int index)
{
    int i;
    if (index >= 0 && index < arr->length   )
    {
        for(i=index; i<arr->length-1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array arr, int key)
{
    int i;
    for(i=0; i<arr.length; i++)
    {
        if(key == arr.A[i])
            return i;
    }
    return -1;
}

int LinearSearchTrans(struct Array *arr, int key)
{
    int i;
    for(i=0; i<arr->length; i++)
    {
        if(key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int LinearSearchHead(struct Array *arr, int key)
{
    int i;
    for(i=0; i<arr->length; i++)
    {
        if(key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int BinSearch(struct Array arr, int key)
{
    int l = 0;
    int h = arr.length-1;
    int mid;
    while(l <= h)
    {
        mid = (l + h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            h = mid - 1;
        else l = mid + 1;
    }
    return -1;
}

int RBinSearch(int a[], int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid = (l+h)/2;
        if (key == a[mid])
            return mid;
        else if(key < a[mid])
            return RBinSearch(a, l, mid-1, key);
        else 
            return RBinSearch(a, mid+1, h, key);
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    Append(&arr, 10);
    Display(arr);

    Insert(&arr, 0, 25);
    Display(arr);

    Delete(&arr, 1);
    Display(arr);

    printf("index: %d \n", LinearSearch(arr, 4));
    
    printf("index: %d \n", LinearSearchTrans(&arr, 10));
    Display(arr);

    printf("index: %d \n", LinearSearchHead(&arr, 10));
    Display(arr);

    printf("index: %d \n", BinSearch(arr, 25));

    printf("index: %d \n", RBinSearch(arr.A, 0, arr.length-1, 25));
    return 0;
}