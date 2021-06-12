#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter"
         << " " << n << " Numbers :";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Elements of array in sorted ascending order:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}