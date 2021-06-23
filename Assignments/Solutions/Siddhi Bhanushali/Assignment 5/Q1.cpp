#include <iostream>
using namespace std;
void sort01(int a[],int n){
  int s=0;
  int e=n-1;
  while(s<e){
    if(a[s]==1){
      swap(a[s],a[e]);
      e--;
    }
    else
       s++;
  }
}
int main() {
  int n,a[100];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort01(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  
}