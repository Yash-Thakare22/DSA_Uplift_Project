#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int size, index, flag = 0;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    
    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++)
        cin >> a[i];
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i != j && a[i] == a[j])
            {
                index = i;
                flag = 1;
            }
        }
        
        if(flag == 1)
            break;
    }
    
    cout << a[index];
    
    return 0;
}