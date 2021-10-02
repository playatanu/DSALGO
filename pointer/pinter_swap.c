//Swap Number using Pointer
#include <stdio.h>

int main()
{

    int a = 10, b = 20, c;

    int *aPointer, *bPointer, cPointer;

    aPointer = &a;
    bPointer = &b;

    cPointer = *aPointer;
    *aPointer = *bPointer;
    *bPointer = cPointer;

    printf("%d\n", *aPointer);
    printf("%d\n", *bPointer);
}