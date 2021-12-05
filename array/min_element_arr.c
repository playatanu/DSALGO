#include <stdio.h>

int arr[5] = {11, 22, 33, 44, 55};
int MIN;

int min_arr()
{
    MIN = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < MIN)
        {
            MIN = arr[i];
        }
    }
    return MIN;
}

int main()
{
    printf("%d", min_arr());
}