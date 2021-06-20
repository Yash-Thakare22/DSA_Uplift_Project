Question4.
     *
    * *
   * * *
    * *
     *

#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3-i;j++){
            cout<<" ";
        }for(int k=0;k<i;k++){
            cout<<"* ";
        }cout<<endl;
    }
    for(int i=2;i>=0;i--){
        for(int j=3;j>i;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        }cout<<endl;
    }

    return 0;
