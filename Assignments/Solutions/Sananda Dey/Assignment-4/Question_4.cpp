#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<string>a;
   string str1,str2;
  while(cin>>str1){
      a.push_back(str1);
  }
  reverse(a.begin(),a.end());
  for(int i=0;i<a.size();i++){
      cout<<a[i]<<" ";
  }
	return 0;
}