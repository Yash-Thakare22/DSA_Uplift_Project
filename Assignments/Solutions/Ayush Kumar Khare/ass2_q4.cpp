#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            temp = temp + arr[j];
            if (temp > max)
                max = temp;
        }
    }
    cout << max << endl;
    return 0;
}
