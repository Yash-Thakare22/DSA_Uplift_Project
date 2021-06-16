#include <iostream>
using namespace std;

int main() {
  int r,c,k;
  
  for(r=1;r<=5;r++){
    for(c=r;c<=5;c++){
      cout<<"*";
    }
    for(k=1;k<2*r;k++){
      cout<<" ";
    }
    for(c=6;c>r;c--){
      cout<<"*";
    }
    cout<<endl;
  }
  for(r=5;r>=1;r--){
    for(c=5;c>=r;c--){
      cout<<"*";
      
    }
    for(k=1;k<2*r;k++){
      cout<<" ";
    }
    for(c=5;c>=r;c--){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
  
}