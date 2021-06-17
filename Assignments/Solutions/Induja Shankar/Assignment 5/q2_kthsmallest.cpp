#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int key, i, j;
    for(i = 1; i < n; i++) {
        key = a[i];
        
        for(j = i - 1; j >= 0 && a[j] > key; j--)
            a[j + 1] = a[j];
        
        a[j + 1] = key;
    }
    
    cout << a[k - 1];
    
    return 0;
}
