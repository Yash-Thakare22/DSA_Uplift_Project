#include <iostream>
using namespace std;
int search(int arr[],int n,int x){
    int s=0,e=n-1;
    while(s<=e){
        int m = s+(e-s)/2;
        if(arr[m]==x) return 1;
        else if (arr[m]>x) e= m-1;
        else s=m+1;
    }return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<search(a,n,k);
    return 0;
}
