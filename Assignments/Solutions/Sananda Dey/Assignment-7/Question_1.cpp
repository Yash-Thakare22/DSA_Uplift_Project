#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    vector<int>vect;
    int n,sum=1,p;
  while(cin>>n){
      vect.push_back(n);
  }
  sort(vect.begin(),vect.end());
  for(int i=0;i<vect.size()-1;i++){
      if(vect[i+1]==vect[i]){
          sum++;
      }
      else if(vect[i+1]!=vect[i]){
          p=sum;
          sum=0;
      }
      if(p==1){
          cout<<vect[i];
          return 0;
      }
      
  }
  cout<<vect[vect.size()-1];
    
}