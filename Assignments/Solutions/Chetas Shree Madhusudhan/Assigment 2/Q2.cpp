// Question 2

// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers
// Note: Order of elements is not important here


// I/P:
// -2  -3 7 9 -4 2 5 

// O/P:
// -2 -3 –4 7 9 2 5

#include <iostream>
using namespace std;
int main(){
    int a[7]={-2,-3,7,9,-4,2,5};
    for(int i=0;i<7/2;i++){
        if(a[i]>0 && a[6-i] <0) swap(a[i],a[6-i]);
    }for(int i=0;i<7;i++) cout<<a[i]<<" ";
}