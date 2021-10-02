#include <stdio.h>

int arr[5];
int top = -1;

void push(int pushValue)
{

    top++;

    arr[top] = pushValue;
}

void pop()
{

    top--;
}

void show()
{

    for (int i = 0; i < top + 1; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void swap(int poi, int swapValue)
{

    for (int i = sizeof(arr); i >= poi - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[poi - 1] = swapValue;
}

void delet(int poi)
{

    for (int i = poi; i < sizeof(arr - 1); i++)
    {
        arr[i] = arr[i + 1];
    }

    (sizeof(arr)) - 1;
}

int main()
{

    push(10);
    push(12);
    push(13);
    push(14);

    show();
    swap(2, 100);

    printf("\n--------------\n");

    show();

    printf("\n--------------\n");

    /*  printf("\n%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);

*/
    printf("%d size \n", sizeof(arr));
    delet(1);

    printf("%d size \n", sizeof(arr));
    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("%d ", arr[i]);
    }
}