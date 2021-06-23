#include <iostream>
using namespace std;

int main() {
   long long int n;
   cin>>n;
   long long int a[n][n];
   cout<<"Principal Diagonal:";
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>a[i][j];
           
           if(j==i){
               cout<<a[i][j]<<" ";
           }
       }
   }
   cout<<endl<<"Secondary Diagonal:";
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(j==n-1-i){
               cout<<a[i][j]<<" ";
           }
       }
   }
	return 0;
}