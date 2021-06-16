#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the size of array :";
    cin >> n;
    int a[n];
    int s = 0;
    cout<<"Enter the elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    cout << s;
    return 0;
}
