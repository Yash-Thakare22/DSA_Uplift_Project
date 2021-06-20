#include <iostream>
using namespace std;
void rotate(int a[],int n){
  int j=n-1;
  int temp=a[j];
  for(int i=n-1;i>=0;i--){
    a[i+1]=a[i];
    
  }
  a[0]=temp;
}
int main(){
  int a[100],n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  rotate(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  
}
  
    
  