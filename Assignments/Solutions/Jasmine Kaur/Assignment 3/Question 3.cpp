#include<iostream>
using namespace std;
int main(){
    int m=5,n=5;
    int a[m][n] = {
        1  , 2  , 3 , 4 , 5 ,
        16 , 17 , 18,  19 , 6,
        15 , 24 , 25,  20,  7,
        14 , 23 , 22 , 21,  8,
        13 , 12 , 11 , 10,  9  };

    int cs=0,ce=n-1;
    int rs=0,re=m-1;
    while(cs<=ce && rs<=re){
        for(int i=cs;i<=ce;i++){
            cout<<a[rs][i]<<" ";
        }rs++;
        for(int i=rs;i<=re;i++){
            cout<<a[i][ce]<<" ";
        }ce--;
        for(int i=ce;i>=0;i--){
            cout<<a[re][i]<<" ";
        }re--;
        for(int i=re;i>=rs;i--){
            cout<<a[i][cs]<<" ";            
        }cs++;
    }

    return 0;
}
