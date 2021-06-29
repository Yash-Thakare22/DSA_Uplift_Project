#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int element = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                element = a[i];
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << element;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No element is repeating-invalid input";
    }

    return 0;
}
