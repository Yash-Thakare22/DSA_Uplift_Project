#include<iostream>
using namespace std;

int main()
{
    int n = 5, j=-1;
    int arr[] = {1, 0, 1, 1, 0};

    for(int i=0; i<n; i++)
    {
        if(arr[i]<1)
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
