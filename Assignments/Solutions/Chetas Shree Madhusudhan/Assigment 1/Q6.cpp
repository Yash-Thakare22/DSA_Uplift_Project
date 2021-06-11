// 54321
// 5432
// 543
// 54
// 5
// Q6
#include <iostream>
using namespace std;
int main(){    
    for(int i=0;i<5;i++){
        int x=5;
        for(int j=0;j<5-i;j++) {
            cout<<x;
            x--;}
        cout<<endl;
    }
    return 0;
}