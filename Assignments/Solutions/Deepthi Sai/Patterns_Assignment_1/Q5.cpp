#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n-1;i++)
{   int count=1;
    for(int j=0;j<=i;j++)
    {
    cout<<count<<" ";
    count=count+1;
    }
    
    for(int k=2*n-4*i+1;k>=0;k--)
    {
        cout<<" ";
    }
    for(int l=0;l<=i;l++)
    {
     cout<<count-1<<" ";
     count=count-1;
    }
    cout<<endl;
}
for(int i=1;i<=n;i++)
{
    cout<<i<<" ";
}

for(int j=n-1;j>=1;j--)
{
    cout<<j<<" ";
}
cout<<endl;
return 0;
}
