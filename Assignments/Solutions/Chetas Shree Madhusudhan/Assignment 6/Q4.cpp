// Question 4: Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.
// Example 1:
// Input:
// N = 8
// arr[] = {1,1,1,1,1,0,0,0}
// Output: 5
#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==1) s++;
    }
    cout<<s;
    return 0;
}