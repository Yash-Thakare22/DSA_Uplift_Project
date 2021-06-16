#include <bits/stdc++.h>
using namespace std;

int search(int l,int h,int a[ ],int x){
    while(l<=h){
        int mid=(l+h)/2;
        if(x==a[mid]){
            return 1;
        }else if(x>a[mid])
        l=mid+1;
        else
        h=mid-1;
    }
    return -1;
}
int main() {
       int n,p,x;
       cin>>n;
       cin>>x;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
      p= search(0,n-1,a,x);
      
      cout<<p;
    return 0;
}