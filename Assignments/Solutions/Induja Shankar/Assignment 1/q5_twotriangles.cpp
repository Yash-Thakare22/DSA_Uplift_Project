#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n = 4;
    int x, y;
    
    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= n; y++)
        {
            if(y <= x)
                cout << y << " ";
            else
                cout << "  ";
        }
        for(int y = n; y >= 1; y--)
        {
            if(y <= x)
                cout << y << " ";
            else
                cout << "  ";
        }
        
        cout << endl;
    }
    
    return 0;
}