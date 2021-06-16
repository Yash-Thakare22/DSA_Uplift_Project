#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count0 = 0, count1 = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0)
            count0++;
        if(a[i] == 1)
            count1++;
    }
    
    for(int i = 0; i < n; i++) {
        if(i < count0)
            a[i] = 0;
        else
            a[i] = 1;
    }
    
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    return 0;
}
