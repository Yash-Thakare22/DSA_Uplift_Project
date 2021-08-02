#include <iostream>
using namespace std;

int main()
{
    int n, flag,k;
    cout << "Enter number of elements";
    cin >> n;
    cout<<"Enter kth number";
    cin>>k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j+1]=temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }

    cout<<"The smallest kth element is"<<arr[k-1];

    return 0;
}
