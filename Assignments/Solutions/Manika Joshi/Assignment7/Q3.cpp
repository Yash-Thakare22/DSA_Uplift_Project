#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x;
    if ( (x&(x-1)) ==0 && (x%3)==1)
        cout << "True";

    else
        cout << "False";
}
