#include <iostream>
using namespace std;
void rearrange(int a[],int n){
  int s=0;
  int e=n-1;
  while(s<e){
    if(a[s]<0 && a[e]<0){
      s++;
    }
    else if(a[s]>0 && a[e]<0){
      int temp=a[s];
      a[s]=a[e];
      a[e]=temp;
      s++;
      e--;
    }
    else if(a[s]>0 && a[e]>0){
      e--;
    }
    else{
      s++;
      e--;
    }
    
  }
  
}

int main() {
  int n,a[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    
    
  }
  rearrange(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  
}