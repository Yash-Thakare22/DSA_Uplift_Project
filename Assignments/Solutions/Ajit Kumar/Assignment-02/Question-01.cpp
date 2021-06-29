/*

@Question 2
An array contains both positive and negative numbers in random order.
Rearrange the array elements so that all negative numbers appear before all positive numbers
Note: Order of elements is not important here

I/P:
-2  -3 7 9 -4 2 5 

O/P:
-2 -3 –4 7 9 2 5

*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    int arr[8]={-2,-3,-4,7,9,-4,2,5};
    for (i = 0; i < 8; i++)
        cin >> arr[i];
    int j = 0;
    for (i = 0; i < 8; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for (i = 0; i < 8; i++)
        cout << arr[i] << " ";
    return 0;
}