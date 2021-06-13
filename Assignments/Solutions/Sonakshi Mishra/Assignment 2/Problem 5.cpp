#include <iostream>
using namespace std;
int main()
{
    int ele,i, j;
    cin >> ele; //number of elements
    int Arr[ele];
    for (i = 0; i < ele; i++)
        cin >> Arr[i];

    for (i = 0; i < ele; i++)
    {
        for (j = i + 1; j < ele; j++)
        {
            if (Arr[i] == Arr[j])
            {
                cout <<Arr[j];
                return 0;
            }
        }
    }
    cout << "No repeating element found";
    return 0;
}