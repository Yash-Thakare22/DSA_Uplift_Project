#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rend=5,rstart=0,cend=5,cstart=0;
   // int arr[5][5];

    int m=5, n=5,i;
    int a[5][5] = {{1, 2, 3, 4, 5}, {16, 17, 18, 19, 6}, {15, 24, 25, 20, 7}, {14, 23, 22, 21, 8}, {13, 12, 11, 10, 9} };

   /* while(rstart<rend && cstart<cend)
    {
        for(int i=cstart;i<cend;i++)
            cout<<arr[rstart][i]<<" ";

        rstart++;

        for(int i=rstart;i<rend;i++)
            cout<<arr[i][cend-1]<<" ";

        cend--;

        if (rstart < rend)
        {
            for (int i = cend - 1; i >= 0; --i)
            {
                cout << arr[rend-1][i] << " ";
            }
            rend--;
        }

        if (cstart < cend)
        {
            for (int i = rend - 1; i >= rstart; --i)
            {
                cout << arr[i][rstart] << " ";
            }
            cstart++;
        }*/

    int k = 0, l = 0;

    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
            cout << a[k][i] << " ";
        k++;

        for (i = k; i < m; i++)
            cout << a[i][n - 1] << " ";
        n--;

        if (k < m)
        {
            for (i = n - 1; i >= 0; --i)
                cout << a[m - 1][i] << " ";
            m--;
        }

        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
                cout << a[i][l] << " ";
            l++;
        }
    }

    return 0;
}
