#include <stdio.h>

int arr[5] = {11, 22, 33, 44, 55};
int SUM = 0;

int sum_arr()
{
    for (int i = 0; i < 5; i++)
    {
        SUM = SUM + arr[i];
    }
    return SUM;
}

int main()
{
    printf("%d", sum_arr());
}
