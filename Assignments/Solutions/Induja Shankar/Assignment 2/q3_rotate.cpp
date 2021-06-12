#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    
    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++)
        cin >> a[i];
    
    int first = a[size - 1];
    for(int i = size - 1; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = first;
    
    for(int i = 0; i < size; i++)
        cout << a[i] << " ";
    
    return 0;
}