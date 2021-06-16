#include <iostream>
using namespace std;
int countOnes(bool a[], int n)
{
  int s=0;
  int e=n-1;
  while(s<=e){
    int mid=(s+e)/2;
    if(a[mid]<1){
      e=mid-1;
    }
    else if(a[mid]>1){
      s=mid+1;
    }
    else{
      if(mid==n-1 || a[mid+1] !=1){
        return mid+1;
      }
      else
        s=mid+1;
      
    }
  }
  return 0;
}

int main() {
  int n;
  bool a[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  
  cout<<countOnes(a,n);
  
  
}