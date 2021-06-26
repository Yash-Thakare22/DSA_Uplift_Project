#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    long long n,positive=0,negative=0;
   while(cin>>n){
       if(n<0){
          negative++;
       }
       else
        positive++;
      
   }if(positive==negative)
    cout<<"True";
    else
    cout<<"False";
 return 0;   
}