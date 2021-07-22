#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
    int n;  
    cout<<"Enter array size: ";  
    cin>>n;  
      
    int arr[n];  
    cout<<"\nEnter array elements:";  
    for(int i = 0; i < n; i++)  
    cin>>arr[i];  
      
    int k;  
    cout<<"\nEnter kth number:";  
    cin>>k;  
      
    cout<<"\nArray before swapping:\n";  
    for(int i = 0; i < n; i++)  
    cout<<arr[i]<<" ";  
      
    int temp = arr[k-1];  
    arr[k-1] = arr[n-k];  
    arr[n-k] = temp;  
      
    cout<<"\nArray after swapping:\n";  
    for(int i = 0; i < n; i++)  
    cout<<arr[i]<<" ";  
}  