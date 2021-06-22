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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i]<<" ("<<arr[i]<<" is the first element that repeats) "<<endl;
                return 0;
            }
        }
    }
    return 0;
}
