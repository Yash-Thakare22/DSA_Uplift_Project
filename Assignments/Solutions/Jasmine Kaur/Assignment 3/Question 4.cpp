#include <iostream>
using namespace std;
int main(){
    int m=4,n=4;
    int a[4][4] = {
                    1  , 2 ,  3  , 4,
                    5  , 6 ,  7  , 8,
                    9  , 10,  11 , 12,
                    13 , 14,  15 , 16 };
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
