#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    cout<<"Enter number to be found";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            cout<<"Element found at"<<i+1;
            break;
        }
    }
    return 0;
}
