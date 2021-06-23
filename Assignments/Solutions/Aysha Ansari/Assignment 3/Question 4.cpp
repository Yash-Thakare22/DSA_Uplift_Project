#include <iostream>
using namespace std;
void transpose(int a[][4],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }
}
void reverse(int a[][4],int n){
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            swap(a[i][j],a[n-1-i][j]);
        }
    }
}
int main() {
    int n=4;
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    transpose(a,n);
    reverse (a,n);
    transpose(a,n);
    reverse (a,n);
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
