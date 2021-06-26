#include <stdio.h>
int prime(int num)
{
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
            return 0;
        i++;
    }
    return 1;
}
int main()
{
    int n = 5, i, j = 1;
    for (i = n; i > 0; i--)
    {
        if (prime(i))
        {
            int j = 1;
            while (j<=n)
            {
                if (j > (n - i))
                    printf("* ");
                else
                    printf(" ");
                j++;
            }
                printf("\n");
        }
    }
    return 0;
}
