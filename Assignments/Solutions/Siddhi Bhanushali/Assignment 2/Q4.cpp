#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a[100],n,max_sum=0,cs=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    
    cs=cs+a[i];
    if(cs<0){
      cs=0;
    }
    max_sum=max(max_sum,cs);
  }
  
  cout<<max_sum;
  
}
    
  