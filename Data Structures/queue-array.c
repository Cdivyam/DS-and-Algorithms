/*
    Queue Implementation Using Arrays
 */
#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void enqueue(struct Array *arr, int n, int *f, int *r)
{
    if(*r == arr->size-1)
        printf("Overflow");
    if(*f == *r)
    {
        
        
    }
}

int dequeue(int Q[], int n)
{

}

int main()
{
    struct Array arr;
    int m, front=0, rear=0;
    int n, pos;
    arr.length = 0;
    scanf("Length of Queue %d", arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));

    do
    {
        scanf("Enter: \n 1: Enqueue\n 2: Dequeue\n 3:Exit\n%d",&m);
        switch (m)
        {
        case 1:
            scanf("Enter No.: %d", &n);
            enqueue(&arr, n, &front, &rear);
            break;
        
        default:
            break;
        }
    } while (m==3);
    
}