//  * * * * *
//    * * *
//     * *
//      *
// Q8
#include <iostream>
using namespace std;
int main(){
    for(int i=4;i>=0;i--){
        for(int j=0;j<4-i;j++) cout<<" ";
        for(int m=0;m<i+1;m++) cout<<"* ";
        cout<<endl;
    }
    return 0;
}