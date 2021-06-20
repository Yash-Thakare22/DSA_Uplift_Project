#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cout<<"Enter No. of rows of Square array :";
    cin >> n;
    int a[n][n];
    cout<<"Enter the elements of array :"<<endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Principal Diagonal : ";

    for (i = 0; i < n; i++)
        cout << a[i][i] << " ";

    cout << "\n"
         << "Secondary Diagonal : ";

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if ((i + j) == n - 1)
            {
                cout << a[i][j] << " ";
            }
        }

    return 0;
}