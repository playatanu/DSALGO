#include <stdio.h>

int arr[5] = {11, 22, 33, 44, 55};
int SUM = 0;

int arr_avg()
{
    for (int i = 0; i < 5; i++)
    {
        SUM = SUM + arr[i];
    }
    return SUM / 5;
}

int main()
{
    printf("%d", arr_avg());
}