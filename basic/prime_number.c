#include <stdio.h>

int chake_prime(int ele)
{
    for (int i = 2; i < ele; i++)
    {
        if (ele % i == 0)
            return 0;
    }
    return 1;
}

void print_prime(int START, int END)
{
    for (int i = START; i <= END; i++)
    {
        if (chake_prime(i) == 1)
            printf("[%d] ", i);
    }
}
int main()
{
    print_prime(1, 10);
}