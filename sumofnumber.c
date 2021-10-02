#include <stdio.h>

int main()
{

    int n = 134, count = 0, sum = 0;
    int *nPointer;

    printf("%d\n", *nPointer);

    while (*nPointer != 0)
    {
        *nPointer /= 10;

        ++count;
        sum = sum + count;
    }

    printf("%d\n", sum);
}