//binary Search

#include <stdio.h>

int main()
{

    int BEN = 0, END = 5 - 1, MID, FOUND = 0;

    int arr[5];

    printf("Enter 5 Elements\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int searchValue;

    printf("Enter search element\n");

    scanf("%d", &searchValue);

    while (BEN < END)
    {
        MID = (BEN + END) / 2;
        if (arr[MID] == searchValue)
        {
            FOUND++;
            break;
        }

        else if (arr[MID] > searchValue)
        {
            END = MID - 1;
        }
        else
        {
            BEN = MID + 1;
        }
    }

    if (FOUND == 0)
    {
        printf("NOT FOUND");
    }

    else
    {

        printf("FOUND");
    }
}