// Question 5

// Given an array arr[] of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest

// I/P:
// 5 10 40 4 6 5 10

// O/P:
// 5 (5 is the first element that repeats)

#include <iostream>
using namespace std;
int main(){
    int n=7;
    int a[n] = {5 ,10 ,40 ,4, 6, 5, 10};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i] == a[j]) {cout<<a[i]; return 0;}
        }
    }
    return 0;
}