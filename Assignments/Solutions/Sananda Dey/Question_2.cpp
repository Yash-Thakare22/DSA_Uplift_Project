#include <iostream>
using namespace std;

int main() {
  long long int k,n;
  cin>>n;
  
 for(int i=0;i<n;i++){
     if(i<=n/2){
     for(int j=0;j<=2*(n/2+1);j++){
         if(j<n/2+1-i) {
             cout<<"*";
         }
         if(j>n/2+1+i){
         cout<<"*";
         }
         if(j>=n/2+1-i){
             cout<<" ";
         }
         if(j<=n/2+1+i){
             cout<<" ";
         }
     }cout<<endl;
     }else{
         k=2*(n/2+1);
         for(int j=0;j<=k;j++){
        if(j<i-k/2+2)
        cout<<"*";
        if(j>k-2-i+k/2)
        cout<<"*";
        if(j>=i-k/2+2)
        cout<<" ";
        if(j<=k-2-i+k/2)
        cout<<" ";
         
     }cout<<endl; 
    
     }
 
 }
 	return 0;
}