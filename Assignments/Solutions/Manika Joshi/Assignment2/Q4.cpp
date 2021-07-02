#include <iostream>

using namespace std;

int main()
{
    int n,maxsum=0,cursum=0;
    cout << "Enter number of elements";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cursum=cursum+arr[i];

        if(cursum>maxsum)
            maxsum=cursum;

        if(cursum<0)
            cursum=0;
    }
   
    cout<<maxsum;
    return 0;
}
