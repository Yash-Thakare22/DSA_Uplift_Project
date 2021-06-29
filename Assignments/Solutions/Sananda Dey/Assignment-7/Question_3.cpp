#include <iostream>
using namespace std;

int main(){
    int n,i=0,sum=0;
    cin>>n;
  if((n&(n-1))==0){
        while((n^(1<<i))!=0){
        i++;
        sum++;
    }
    if(sum%2==0)
    cout<<"YES"<<endl;
  else
     cout<<"NO"<<endl;
    
  }
  
  else
     cout<<"NO"<<endl;
    
	return 0;
}