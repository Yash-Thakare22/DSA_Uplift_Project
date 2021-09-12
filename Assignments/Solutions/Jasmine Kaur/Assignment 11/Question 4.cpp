#include <bits/stdc++.h>
using namespace std;

int find(int decimal_number) {
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 * find(decimal_number / 2));
}

int main() {
    int decimal_number;
    cin>>decimal_number;
    cout << find(decimal_number);
    return 0;
}
