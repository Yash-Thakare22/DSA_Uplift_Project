#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];

    cout << "Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
