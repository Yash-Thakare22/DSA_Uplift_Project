#include <iostream>

using namespace std;

int main()
{   int m,n;
    cin>> m>> n;
    int a [m][n];
    for (int i=0; i<m;i++)
    {
        for (int j= 0; j<n;j++)
        {
            cin>> a[i][j];
        }
    }
    cout<< "after 180 degree rotation:"<< endl;;
    for (int i=m-1; i>=0;i--)
    {
        for (int j= n-1; j>=0;j--)
        {
            cout<<  a[i][j];
        }
        cout<< endl;
    }
    return 0;
}
