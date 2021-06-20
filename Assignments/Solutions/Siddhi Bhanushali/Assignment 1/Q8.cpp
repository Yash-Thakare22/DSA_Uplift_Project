#include <iostream>
using namespace std;
int main(){
   for(int r=1;r<5;r++){
     for(int c=1;c<=7;c++){
       if(c>=r && c<=8-r){
         cout<<"*";
       }
       else
        cout<<" ";
       
     }
     cout<<endl;
   }
  

  
    return 0;
}
