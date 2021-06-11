#include <iostream>
using namespace std;

int main() {
  long long int k,n,j;
  cin>>n;
  k=1;
  for(int i=1;i<=n;i++){
      for( j=k;j<k+i;j++){
          cout<<j<<" ";
      }
      k=j;
      cout<<endl;
  }
 
 	return 0;
}