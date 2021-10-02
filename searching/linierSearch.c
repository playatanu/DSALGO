//Liniar Search using c

#include <stdio.h>

int main()
{

    int search, count = 0;

    int arry[5];

    printf("Enter 5 Elements\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arry[i]);
    }

    printf("Enter Search Elements\n");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++)
    {

        if (search == arry[i])
            count++;
    }

    if (count > 0)
    {

        printf("%d is found  %d times\n", search, count);
    }

    else
        printf("%d is not found\n", search);
}