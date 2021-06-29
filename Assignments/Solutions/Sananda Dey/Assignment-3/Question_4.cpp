#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int n,m;
   cin>>n>>m;
   long long int a[n][m];
   
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>a[i][j];
       
        
       }
   } for(int i=0;i<n;i++){
       for(int j=0;j<m/2;j++){
           
        swap(a[i][j],a[i][m-1-j]);
       }
   }
  for(int i=0;i<n/2;i++){
       for(int j=0;j<m;j++){
           
        swap(a[i][j],a[n-1-i][j]);
       }
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }

	return 0;
}