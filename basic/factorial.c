#include <stdio.h>

int factorial(int ele)
{
    int temp_f = 1;

    for (int i = 1; i <= ele; i++)
    {
        temp_f = temp_f * i;
    }

    return temp_f;
}
int main()
{
    printf("%d", factorial(5));
}