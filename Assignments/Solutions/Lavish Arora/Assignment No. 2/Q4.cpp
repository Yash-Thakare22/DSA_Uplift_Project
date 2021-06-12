#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    int maxsum = 0;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter"
         << " " << n << " Numbers :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxsum = max(maxsum, sum);
        }
    }

    cout << "Maximum sum is  :" << endl;

    cout << maxsum;

    return 0;
}