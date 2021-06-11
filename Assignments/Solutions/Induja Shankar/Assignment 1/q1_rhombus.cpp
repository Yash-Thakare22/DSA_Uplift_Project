#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++) 
            cout<<"  ";
            
        for(int j = 0; j < n; j++)
            cout<<"* ";
            
        cout<<endl;
    }
 
}
