#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    vector<long long int>a;
	long long int n,p;
	while(cin>>n){
	a.push_back(n);
	}
   sort(a.begin(),a.end());
   for(int i=0;i<a.size();i++){
       cout<<a[i]<<" ";
   }

    return 0;
}