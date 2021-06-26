#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i < 2 * n)
    {
        if (i <= n)
        {
            int j = n;
            while (j)
            {
                if (j > i)
                    printf(" ");
                else
                    printf(" *");
                j--;
            }
        }
        else
        {
            int j = 1;
            while (j <= n)
            {
                if (j > (i - n))
                    printf(" *");
                else
                    printf(" ");
                j++;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
