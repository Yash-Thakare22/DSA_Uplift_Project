/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;



void First_Repeating_element(int arr[], int n){
  int k=0; //flag variable
  int max=n;
  for(int i=0;i<n;i++){
    if(max<arr[i]){
      max=arr[i];
    }
  }
  int a[max+1]={ };//to store first occurrence 
  int b[max+1]={ };//to store duplicates
  for(int i=0;i<n;i++){
    if(a[arr[i]]){
      b[arr[i]]=1;
      k=1;
      continue;
    }
    else
     a[arr[i]]=i;
  }
  if(k==0)
  cout<<"No repeating element";
  else{
    int min=max+1;
    for(int i=0;i<max+1;i++){
      if(a[i] && min>a[i] && b[i] ){
        min=a[i];
      }

    }
    cout<<arr[min-1];
    
  }
cout<<endl;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

  First_Repeating_element(arr,n);
}

