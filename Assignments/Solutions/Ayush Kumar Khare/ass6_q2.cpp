#include <iostream>
using namespace std;

int binary_search(int key, int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            for (int i = l; i <= mid; i++)
            {
                if (arr[i] == key)
                    return i;
            }
        }
        else if (arr[mid] > key)
            return binary_search(key, arr, l, mid - 1);
        else
            return binary_search(key, arr, mid + 1, h);
    }
    return -1;
}

void find(int arr[], int search, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "present at " << i<<endl;
            return;
        }
    }
    cout << "Not present"<<endl;
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
    int key;
    cin >> key;
    /*
    int index = binary_search(key, arr, 0, n - 1);
    if (index == -1)
        cout << "Not present";
    else
        cout << "present at " << index << endl;
    */
    find(arr, key, n);
    return 0;
}
