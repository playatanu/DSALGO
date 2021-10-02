#include <stdio.h>

int main()
{

    int n = 1231, res = 0, sum = 0;
    int *nPointer;

    nPointer = &n;

    printf("%d\n", *nPointer);

    while (*nPointer != 0)

    {

        res = *nPointer % 10;
        *nPointer = *nPointer / 10;

        sum = sum + res;
    }

    printf("%d\n", sum);
}