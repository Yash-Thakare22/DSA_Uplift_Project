#include <iostream>
using namespace std;
int main()
{
    int ele;//number of elements
    cin >> ele;
    int Arr[ele];
    for (int i = 0; i < ele; i++)
        cin >>Arr[i];
    int n = Arr[ele - 1];
    for (int i = ele - 1; i > 0; i--)
        Arr[i] = Arr[i - 1];
    Arr[0] = n;
    for (int i = 0; i < ele; i++)
        cout << Arr[i] << " ";
    return 0;
}