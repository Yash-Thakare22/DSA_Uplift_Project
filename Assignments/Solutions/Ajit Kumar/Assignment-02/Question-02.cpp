/* 

@Question 1.
Given an array arr[] of size N, the task is to sort the array in ascending order
I/P: 
6
0 9 4 10 7 8
O/P:
0 4 7 8 9 10
*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, temp;
    int arr[5]={0,-9,4,10,7};
    
    //
    for (i = 0; i <5; i++)
    {
        for (j = i; j<5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout << arr[i] << " ";
    }
    return 0;
}