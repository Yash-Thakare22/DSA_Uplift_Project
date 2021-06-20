/* Question 5

Given an array arr[] of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest

I/P:
5 10 40 4 6 5 10

O/P:
5 (5 is the first element that repeats)
*/

#include <iostream>
using namespace std;

int main(){

    int n, temp;
    int flag = 0;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << endl;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
            if (arr[i] == arr[j]) {
                temp = arr[i];
                flag = 1;
                break;
            }
        if (flag == 1)
            break;


    }

    cout << temp;

    return 0;
}

