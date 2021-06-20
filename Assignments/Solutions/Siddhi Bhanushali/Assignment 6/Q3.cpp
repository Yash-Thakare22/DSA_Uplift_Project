#include <iostream>
using namespace std;
int search_ele(int a[],int n,int key){
  int s=0;
  int e=n-1;
  int res;
  while(s<=e){
    int mid=(s+e)/2;
    if(a[mid]==key){
      return mid;
    }
    else if(a[mid]>key){
      e=mid-1;
    }
    else {
      s=mid+1;
    }
    
  }
  return -1;
}

int main() {
  int n,a[100],k;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>k;
  cout<<search_ele(a,n,k);
  
  
}