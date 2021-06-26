#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
        
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    
    int i = 0, j = 0; 
    while(i < m && j < n) { 
        if(a[i] == b[j]) { 
            cout << b[j] << " "; 
            i++; 
            j++; 
        }
        else if(a[i] > b[j]) 
            j++; 
        else 
            i++; 
    } 
    
    return 0;
}
