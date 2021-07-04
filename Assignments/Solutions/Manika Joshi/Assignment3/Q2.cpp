#include <iostream>

using namespace std;

int main()
{
   // int n, m, temp;
    int arr[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    for (int i = 0; i < 3; i++)
    {
        int j = 0, k = 2;
        while (j < k)
        {
            int t;
            t = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = t;
            j++;
            k--;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j]<<" ";
        
            cout<<endl;
    }

    return 0;
}
