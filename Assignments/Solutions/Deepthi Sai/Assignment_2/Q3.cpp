#include<iostream>
#include<vector>
#include<list>
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
int temp=arr[n-1];
for(int j=n-1;j>=0;j--)
{
    arr[j]=arr[j-1];
}
arr[0]=temp;
for(int i=0;i<n;i++)
{
    
    cout<<arr[i]<<" ";
}
}
