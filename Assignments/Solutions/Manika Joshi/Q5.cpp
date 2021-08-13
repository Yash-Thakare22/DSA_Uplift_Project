#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
  //  temp=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
                cout<<j;
            else 
                cout<<" ";
        }
        for(int k=1;k<=n-1;k++)
        {
            if(k>=n-i)
                cout<<n-k;
            else 
                cout<<" ";
        } //*/
        cout<<endl;
    }
    return 0;
}
