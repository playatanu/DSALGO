#include <stdio.h>

int main()
{

    int a[] = {13, 20, 313, 41, 50};

    int *p;

    p = a;

    printf("%p\n", p);
    printf("%d\n", *p);
    p++;
    printf("%p\n", p);
    printf("%d\n", *p);
    p++;
    printf("%p\n", p);
    printf("%d\n", *p);

    printf("%d\n", *a);
}