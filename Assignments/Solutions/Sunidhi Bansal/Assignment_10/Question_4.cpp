//Decimal to binary number using recursion
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string binary = "";

int decimal_to_binary(int n) {
    if (n == 0) {
        reverse(binary.begin(),binary.end());
        return stoi(binary);
    }
    
    binary += to_string(n % 2);
    
    return decimal_to_binary(n / 2);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<decimal_to_binary(n);
    return 0;
}

