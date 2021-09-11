#include <iostream>

using namespace std;//Given an integer n, find whether it is a power of 4 or not

bool is_Power_Of_Four(int a) {
    if(a< 0) {
        return 0;
    }
    
    long t= 1;
    
    while (t) {
    
        if (t == a) {
            return 1;
        } 
        else if (t > a) {
            return 0;
        } 
        else {
            t = t << 2;
        }
    }
    return 0;
}


int main()
{
    int n;
    cin>>n;
    if(is_Power_Of_Four(n)) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }

    return 0;
}
