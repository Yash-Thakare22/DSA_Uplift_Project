// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *
// Q2
#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++) cout<<"*";
        for(int m=2*i;m>=0;m--) cout<<" ";
        for(int j=0;j<5-i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=4;i>0;i--){
        for(int j=0;j<5-i;j++) cout<<"*";
        for(int m=2*i;m>=0;m--) cout<<" ";
        for(int j=0;j<5-i;j++) cout<<"*";
        cout<<endl;
    }
    return 0;
}