#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
   int n,m=1;
   cin>>n;
   while(n&m){
       n=n^m;
       m<<=1;
   }
   n=n^m;
   cout<<n;
 return 0;   
}