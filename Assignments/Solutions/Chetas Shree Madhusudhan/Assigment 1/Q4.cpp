//      *
//     * *
//    * * *
//     * *
//      *
// Q4
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3-i;j++){
            cout<<" ";
        }for(int m=0;m<i;m++){
            cout<<"* ";
        }cout<<endl;
    }
    for(int i=2;i>=0;i--){
        for(int j=3;j>i;j--){
            cout<<" ";
        }
        for(int m=0;m<i;m++){
            cout<<"* ";
        }cout<<endl;
    }

    return 0;
}