#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int rotated[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[(i + 1) % n];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
