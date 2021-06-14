#include <iostream>
using namespace std;

int main() {
  for (int r=1;r<=5;r++){
    for(int c=6-r;c>0;c--){
      cout<<" ";
    }
    cout<<"*****"<<endl;
  }
  return 0;
}
/*
     *****
    *****
   *****
  *****
 *****
 */