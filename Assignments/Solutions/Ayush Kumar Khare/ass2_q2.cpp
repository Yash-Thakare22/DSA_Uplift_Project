#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int order[n];
    int j=n-1, k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            order[k++] = arr[i];
        }
        /*else
        {
            order[j--] = arr[i];
        }*/
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            order[k++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
        cout << order[i] << " ";
    return 0;
}
