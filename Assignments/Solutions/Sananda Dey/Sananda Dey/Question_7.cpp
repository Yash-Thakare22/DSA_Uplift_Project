#include <iostream>
using namespace std;

int main() {
  long long n,count=1;
  cin>>n;
  for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
          if(j==0||i==0)
          count=1;
          else
          count=count*(i+1-j)/j;
          cout<<count<<" ";
          
      }cout<<endl;
  }
	return 0;
}