#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    long int n;
    cout<<"Enter the no.";
    cin >> n;
    cout << log2(n & (-n)) + 1;
    return 0;
}
