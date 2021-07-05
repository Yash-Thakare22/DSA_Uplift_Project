#include <iostream>

using namespace std;

void pattern_printing_row(int n) {
    if(n == 0) {
        return;
    }
    cout<<" * ";
    n -= 1;
    pattern_printing_row(n);
}

void pattern_printing(int n) {
    if(n == 0) {
        return;
    }
    
    pattern_printing_row(n);
    cout<<endl;
    n -= 1;
    pattern_printing(n);
}

int main()
{
    int n;
    cin>>n;
    
    pattern_printing(n);

    return 0;
}

