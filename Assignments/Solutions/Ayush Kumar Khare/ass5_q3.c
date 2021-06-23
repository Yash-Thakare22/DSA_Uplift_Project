#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr1[n], arr2[m];
    int k = m > n ? m : n;

    for (int i = 0; i < k; i++)
    {
        if (i < n)
            scanf("%d", &arr1[i]);
        if (i < m)
            scanf("%d", &arr2[i]);
    }

    k = m < n ? m : n;
    int intersection[k];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr2[j] != '\0' && arr2[j] == arr1[i])
            {
                intersection[index++] = arr2[j];
                arr2[j] = arr2[--m];
                printf("%d  ", intersection[index - 1]);
                break;
            }
        }
    }
}
