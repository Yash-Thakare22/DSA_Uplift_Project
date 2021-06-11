/*
    Question 5.
    1           1
    1 2       2 1
    1 2 3   3 2 1
    1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
int i,j;
for(i=1;i<=4;i++){
    if(i==4){
            for(int m=1;m<=i;m++){
                cout<<m;
            }
            for(int n=i;n>1;n--){
                cout<<n;
            }
    }
    else{
    for(j=1;j<=i;j++){
        cout<<j;
    }
    for(int k=5;k>=2*i-1;k--){
        cout<<" ";
    }
    for(j=i;j>=1;j--){
        cout<<j;
    }
    }
    cout<<endl;
}

return 0;
}

