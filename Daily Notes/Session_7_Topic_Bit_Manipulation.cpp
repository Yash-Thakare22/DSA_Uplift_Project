To print binary equivalent
#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string ans="";
  while(n>=1)
  {
    ans=to_string(n%2)+ans;
    n=n/2;
  }
  cout<<ans<<endl;
  return 0;
}

_____________________________________________________________________________________________________________________________________________________________________________
 
To check whether a number can be represented in power of 2
  
int main()
{
  int n;
  cin>>n;
  
  if(((n&(n-1))==0)
     cout<<"YES"<<endl;
  else
     cout<<"NO"<<endl;

return 0;
}
_____________________________________________________________________________________________________________________________________________________________________________
     
To find element whose frequency is 1

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  
  int ans=0;
  for(int i=0;i<n;i++)
    ans=ans^arr[i];
  
  cout<<ans<<endl;
}
_____________________________________________________________________________________________________________________________________________________________________________
     
To check whether kth bit is set or not
     
int main()
{
 int n,k;
 cin>>n>>k;
 if(n&(1<<(k-1))==1)
   cout<<"YES"<<endl;
 else
   cout<<"NO"<<endl;
}
