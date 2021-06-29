/*
Question 1
Given an i/p array where every element occurs three times, except one element which occurs only once . Find that element
I/P:
4 3 5 5 4 4 5
O/P:
3
*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the Elements of the Array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i, s = 0, one = 0, two = 0;
    for(int i=0; i<7; i++) {
        two = two | (one & arr[i]);
        one = one ^ arr[i];
        s = ~(one & two);
        one &= s;
        two &= s;
    }
    cout << "\nElement Which Occured Only 1 Time in the Array = " << one;
    cout << endl;
    return 0;
}
