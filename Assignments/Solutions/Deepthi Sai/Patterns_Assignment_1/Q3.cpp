#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int count=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<(i+1);j++)
    {
     count+=1;
     cout<<count<<" ";
    }
    cout<<endl;
}
return 0;
}
