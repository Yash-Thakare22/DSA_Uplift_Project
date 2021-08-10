#include <iostream>
using namespace std;
int main()
{
    int n, count=0;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
