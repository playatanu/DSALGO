#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 2;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    //     sp->arr[0] =10;
    //  sp->arr[1] =10;
    //  sp->arr[2] =10;

    (isFull(sp)) ? printf("Empty") : printf("Not Empty");

    (1) ? printf("c") : printf("d");

    return 0;
}