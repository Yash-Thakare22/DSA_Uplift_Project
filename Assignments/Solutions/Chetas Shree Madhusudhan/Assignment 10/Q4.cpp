// https://www.geeksforgeeks.org/decimal-binary-number-using-recursion/
#include <iostream>
using namespace std;
int dec(int n){
    if(n==0) return 0;
    return n%2+10*(dec(n/2));
}
int main(){
    int n=10;
    cout<<dec(n);
    

    return 0;
}