#include <iostream>
using namespace std;
int main()
{
    string num1, num2;
    cin >> num1 >> num2;
    if (num1[0] != num2[0])
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
