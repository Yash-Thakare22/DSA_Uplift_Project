// https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/
#include <iostream>
using namespace std;
int mini(int A[],int n){
    if(n==1) return A[0];
    return min(A[n-1],mini(A,n-1));
}
int main(){
    int n=5;
    int a[n]={2,4,1,0,-1};
    cout<<mini(a,n);
    return 0;
}