// https://www.geeksforgeeks.org/program-for-factorial-of-a-number/
#include <iostream>
using namespace std;
int fac(int n){
    if(n==1) return 1;
    return n*fac(n-1);
}
int main(){
    int n = 6;
    cout<<fac(n);
    return 0;
}