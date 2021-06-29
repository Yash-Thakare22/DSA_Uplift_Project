#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    vector<long long int>a;
	long long int n,p;
	while(cin>>n){
	a.push_back(n);
	}
 for(int i=0;i<a.size();i++){
     for(int j=0;j<a.size();j++){
         if(a[i]==a[j]&&j!=i){
             cout<<a[i];
             return 0;
         }
     }
 }

   
}