#include <iostream>
using namespace std;//program to find position of an element in the array

int main()
{
    int x;
    int n,c=0;
       cin >> n;
    int arr[n];
   
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    
    cin >> x;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i<<endl;
            c++;
        }
    }
    if (c==0)
        cout << "Not found";
    return 0;
}

