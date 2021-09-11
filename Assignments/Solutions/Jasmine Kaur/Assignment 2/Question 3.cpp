#include <iostream>
using namespace std;
int main()
{ 
  cout<<"Enter array size"<<endl;
  int n,i,temp;
  int arr[100];
  cin>>n;
  cout<<"Enter array"<<endl;
  for(i=0;i<n;i++)
  { 
    cin>>arr[i];}
    temp=arr[n-1];
  for(i=n-1;i>0;i--)
  {
    arr[i]=arr[i-1];  
  }
  arr[0]=temp;


for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	return 0;
}
