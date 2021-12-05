#include <stdio.h>

int arr[5] = {11, -22, -33, -44, 55};

void rm(int index)
{
    for (int i = index; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void arr_ngative()
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            rm(i);
            i--;
        }
    }
}

int main()
{
    arr_ngative();
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}