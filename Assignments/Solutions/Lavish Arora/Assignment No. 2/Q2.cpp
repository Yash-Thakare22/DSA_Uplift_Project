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
    {
        cin >> arr[i];
    }

    j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }

    cout << "Element of array after rearranging :" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}