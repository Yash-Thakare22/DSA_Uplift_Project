/*

Ques 6 

BIT MANIPULATION : https://practice.geeksforgeeks.org/problems/odd-or-even3618/1 (DO IT WITH BIT MANIPULATION CONCEPT ONLY)

*/

#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    string oddEven(int N){
        if(N&1){
            return "odd";
        }
        return "even";
    }
};

int main(){
  int t;
  cin>>t;
  while(t--){
    int N;
    cin>>N;
    Solution ob;
    cout<< ob.oddEven(N) << endl;
  }
  return 0;
}

