#include <bits/stdc++.h>
using namespace std;

int search(int l,int h,int a[ ],int x){
    while(l<=h){
        int mid=(l+h)/2;
        if(x==a[mid]){
            return mid;
        }else if(x>a[mid])
        l=mid+1;
        else
        h=mid-1;
    }
}
int main() {
       int n,p,x;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }cin>>x;
      p= search(0,n-1,a,x);
      for(int i=0;i<n;i++){
          if(a[p]==a[i]&&i<p)
          {
              cout<<a[i-1];
              return 0;
          }
      }
      cout<<a[p-1];
    return 0;
}