#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Enter the matrix:" << endl;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    
	for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--)
            cout << a[i][j] << " ";
        cout << endl; 
    }
    
    return 0;
}
