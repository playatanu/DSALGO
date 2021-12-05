#include <stdio.h>

int arr[5] = {11, 22, 33, 44, 55};
int MAX;

int max_arr()
{
    MAX = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > MAX)
        {
            MAX = arr[i];
        }
    }
    return MAX;
}

int main()
{
    printf("%d", max_arr());
}