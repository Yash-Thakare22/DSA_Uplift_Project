#include <iostream>
using namespace std;
int main(){
  int r,coeff=1;
  cin>>r;
  for( int i =0;i<r;i++){
    for(int s=0;s<r-i;s++){
      cout<<" ";
      
    }
    for(int j=0;j<=i;j++)
    {
      if(j==0 || i==0){
        coeff=1;
      }
      else {
      coeff=coeff*(i-j+1)/j;}
      cout<<coeff<<" ";
    }
    cout<<endl;
    
  }
  
  
    return 0;
}
