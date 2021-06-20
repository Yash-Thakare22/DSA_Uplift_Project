#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int count=0;int max_tillnow=0;
for(int i=0;i<n;i++)
{
    count=count+arr[i];
    max_tillnow=max(max_tillnow,count);
    if(count<0)
    count=0;
}


cout<<max_tillnow<<endl;



return 0;
}
