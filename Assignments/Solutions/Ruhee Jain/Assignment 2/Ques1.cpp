/*


Question 1

Given an array arr[] of size N, the task is to sort the array in ascending order

I/P: 
6
0 9 4 10 7 8
O/P:
0 4 7 8 9 10


*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an array: ";
    cin>>n;
    int a[n],temp;
    
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) { 
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                
            }
        }
    }
    cout << "Array list after sorting:";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
