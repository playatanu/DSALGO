#include <stdio.h>

int main()
{

    int arr[5];

    int position = 3;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 5 - 1; i > position; i--)

    {

        arr[i + 1] = arr[i];
    }

    arr[position] = 6;

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}