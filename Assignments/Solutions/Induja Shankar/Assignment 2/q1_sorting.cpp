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
    
    //insertion sort
    for(int i = 1; i < size; i++)
    {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
        cout << a[i] << " ";
    
    return 0;
}