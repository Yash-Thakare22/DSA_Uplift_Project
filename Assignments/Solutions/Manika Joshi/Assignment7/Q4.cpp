#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout <<((x >> 1) +(x << 1) +x); //0.5 + 2 + 1
    return 0;
}
