#include <iostream>

using namespace std;

int main()
{
  
  for(int r=1;r<=5;r++){
    int k=5;
    
    for(int c=1;c<=5;c++){
      if(c<=6-r){
        cout<<k--;
      }
    
       }
     cout<<endl;
  }
           
    return 0;
}
