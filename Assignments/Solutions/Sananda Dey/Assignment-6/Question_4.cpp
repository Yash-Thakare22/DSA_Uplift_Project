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
       int n,p,x,sum;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }x=1;
      p= search(0,n-1,a,x);
      for(int i=0;i<n;i++){
          if(a[i]==a[p]&&i!=p)
          {
            sum++;
          }
      }
      cout<<sum+1;
    return 0;
}