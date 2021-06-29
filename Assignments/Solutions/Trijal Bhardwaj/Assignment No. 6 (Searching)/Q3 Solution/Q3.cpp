/*
Question 3
Given a sorted array of size N and an integer K. Check if K is present in the array or not.
Example 1:
Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
*/

#include<iostream>
using namespace std;
int main() {
    int k;
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;
    cout << "\nEnter An Integer K : ";
    cin >> k;
    int a[n];
    cout << "\nEnter the Elements of the Array in Sorted Form : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, h = n-1;
    while(l <= h && a[l] <= k && a[h] >= k) {
        if(l == h) {
            if(a[l] == k)
                cout << "\nInteger " << k << " is Present in the Array";
            else
                cout << "\nInteger " << k << " is NOT Present in the Array";
            break;
        }
        int ind = l + (((double)((h-l)/(a[h]-a[l])))*(k-a[l]));
        if(a[ind] == k)
            cout << "\nInteger " << k << " is Present in the Array";
        if(a[ind] < k)
            l = ind+1;
        if(a[ind] > k)
            h = ind-1;
    }
    if(!(l <= h && a[l] <= k && a[h]>=k))
        cout << "\nInteger " << k << " is NOT Present in the Array";
        cout << endl;
    return 0;
}
