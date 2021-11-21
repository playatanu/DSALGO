#include <stdio.h>
int main()
{

    int n = 0;

    printf("Enter Array Sized \n");

    scanf("%d", &n);
    int arr[n];

    printf("Enter Element \n");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < n; i++)
        {

            if (arr[i] > arr[i + 1])
            {

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("Shoted Array\n");

    for (int i = 0; i < n; i++)
    {

        printf("%d \n", arr[i]);
    }
}