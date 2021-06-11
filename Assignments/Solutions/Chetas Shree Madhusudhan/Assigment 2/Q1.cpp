// Question 1.

// Given an array arr[] of size N, the task is to sort the array in ascending order

// I/P: 
// 6
// 0 9 4 10 7 8
// O/P:
// 0 4 7 8 9 10

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];    
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]) swap(a[i-1],a[i]);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

    return 0;
}