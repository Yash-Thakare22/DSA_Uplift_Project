#include <iostream>

using namespace std;

bool isPowerOfFour(int n) {
    if(n < 0) {
        return false;
    }
    
    long y = 1;
    
    while (y) {
    
        if (y == n) {
            return true;
        } 
        else if (y > n) {
            return false;
        } 
        else {
            y = y << 2;
        }
    }
    return false;
}


int main()
{
    int num;
    cin>>num;
    if(isPowerOfFour(num)) {
        cout<<"Yes the number is power of 4."<<endl;
    }
    else {
        cout<<"No the number is not a power of 4."<<endl;
    }

    return 0;
}
