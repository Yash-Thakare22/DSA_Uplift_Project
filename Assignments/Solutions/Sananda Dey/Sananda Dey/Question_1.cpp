#include <iostream>
using namespace std;

int main() {
  long long int n;
  cin>>n;
  for(int i=0;i<n;i++){
      for(int j=0;j<2*n-1;j++){
          if(j<(2*n-1)/2-i)
          cout<<" ";
          if((j>=(2*n-1)/2-i)&&j<(2*n-1)-i){
              cout<<"*";
          }
      }cout<<endl;
  }
 	return 0;
}