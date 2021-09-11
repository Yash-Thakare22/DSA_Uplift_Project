#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
  for(int j=0;j<i;j++)
  {
      cout<<" ";
  }
  for(int k=0;k<n-i;k++)
  {
    cout<<"*"<<" ";  
  }
  for(int j=0;j<i;j++)
  {
      cout<<" ";
  }
  cout<<endl;
}

return 0;
}
