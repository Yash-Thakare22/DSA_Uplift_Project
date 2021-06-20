#include <iostream>
using namespace std;

int main() {
  int r,c,k=1;
  
  for(r=1;r<5;r++){
    for(c=1;c<=r;c++){
      cout<<k++<<" ";
       }
       cout<<endl;
  }
  return 0;
  
}

/*
1 
2 3 
4 5 6 
7 8 9 10
*/