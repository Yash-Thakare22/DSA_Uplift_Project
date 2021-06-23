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

    int i = 0;
    while (arr[i] == 1)
    {
        i++;
    }
    cout << i << endl;
    return 0;
}
