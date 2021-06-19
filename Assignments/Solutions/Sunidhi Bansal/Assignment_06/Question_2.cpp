#include <iostream>

using namespace std;

int search_first_occurence(int arr[], int N,int x)
{
    for(int i = 0; i < N; i++)
    {
        if(x == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int  x;
    cin>>x;
    int index = search_first_occurence(arr,N,x);
    cout<<index;
    return 0;
}