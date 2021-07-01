#include <iostream>
#include<algorithm>

using namespace std;

int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
           cout<< "1";

        }

    }
    return 0;
}
