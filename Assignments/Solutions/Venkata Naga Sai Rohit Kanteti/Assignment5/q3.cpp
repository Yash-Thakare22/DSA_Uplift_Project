/*
Question 3: The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr1[100], arr2[100], n, m, ans[100], i = 0, k = -1, j = 0;
    cin >> n;
    cin >> m;
    cout << "Enter the elements in arr1" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements in arr2" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    
         for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    cout << arr1[i] << " ";
                    
                }
            }
        }
}
