// Question 2: Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.
// Example 1:
// Input:
// N = 10
// arr[] = {1,1,2,2,3,4,5,5,6,7}
// x = 1
// Output: 0
#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<i;
            return 0;
        }
    }    
}
