//bubble sort using recursion
#include <iostream>
using namespace std;

void Bsort(int arr[], int n)
{

if(n>1)
{
    for (int i = 0; i < n - 1; i++)
     //   for (j = 0; j < n - i - 1; j++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }

        Bsort(arr,n-1);
}
else 
    return;


}

int main()
{
    int m;
    cout << "Enter number of elements";
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    Bsort(arr,m);
    cout<<"Sorted array is";
    for (int i = 0; i < m; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
