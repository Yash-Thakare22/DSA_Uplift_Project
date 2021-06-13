#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    vector<long long int>a;
	long long int n,p;
	while(cin>>n){
	a.push_back(n);
	}
    p=a[a.size()-1];
	for (int i=a.size();i>0;i--){
	    a[i]=a[i-1];
	}a[0]=p;
  for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";

    return 0;
}