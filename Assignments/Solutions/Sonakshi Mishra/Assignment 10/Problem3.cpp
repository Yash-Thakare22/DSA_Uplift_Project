 
#include <bits/stdc++.h>
using namespace std;
 
// implement bubble sort
void bubbleSort(int arr[], int n)
{
  
    if (n == 1)
        return;
 
    
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
 
    
    bubbleSort(arr, n-1);
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
     {   cout<<arr[i];
    cout<<"\n";}
}
 

int main()
{
     int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        
    }
    
    bubbleSort(A, n);
    cout<<"Sorted array : \n";
    printArray(A, n);
    return 0;
}
