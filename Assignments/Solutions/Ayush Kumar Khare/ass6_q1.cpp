#include <iostream>
using namespace std;

void find(int arr[], int search, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "present at " << i << endl;
            return;
        }
    }
    cout << "Not present" << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int search;
    cin >> search;

    find(arr, search, n);
    return 0;
}
