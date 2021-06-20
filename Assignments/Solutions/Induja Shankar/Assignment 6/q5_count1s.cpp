#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
        
    for(int i = 0; i < n; i++)
        if(a[i] == 1)
            count += 1;
        else
            break;

    cout << count;
    
    return 0;
}
