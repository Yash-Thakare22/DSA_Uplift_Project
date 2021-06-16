#include <iostream>
using namespace std;
int search_ele(int a[],int n,int key){
  for(int i=0;i<n;i++){
    if(a[i]==key){
      return i;
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
  int ans=search_ele(a,n,k);
  cout<<ans;
  
}