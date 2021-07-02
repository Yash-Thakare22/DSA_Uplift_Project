#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>> n ;
    int a[n][n];
    for (int i =0 ;i<n;i++)
    {   for(int j=0; j<n; j++)
    {
         cin>> a[i][j];
    }

    }
     cout << "Primary diagonal:"<< " ";
    for (int i =0 ;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                cout <<  a[i][j];

        }
    }
    cout<< endl;
cout << "secondary diagonal:";
     for (int i =0 ;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == n-1-j)
                cout <<  a[i][j];

        }
    }

    return 0;
}
