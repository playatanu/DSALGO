#include <stdio.h>

int arr[5] = {11, 22, 33, 44, 55};

int main()
{
    int p = 2;

    int position = p - 1;

    for (int i = 5; i > position; i++)
    {
        arr[i] = arr[i + 1];
    }

    //arr[p] = 700;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}