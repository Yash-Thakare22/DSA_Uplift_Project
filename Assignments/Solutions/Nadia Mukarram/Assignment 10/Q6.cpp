#include <iostream>
using namespace std;
void Pattern(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << "*";
        Pattern(n - 1);
    }
}
void Patternc(int n)
{
    if (n < 1)
    {
        return;
    }
    else
    {
        Pattern(n);
        cout << endl;
        Patternc(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    Patternc(n);
    return 0;
}
