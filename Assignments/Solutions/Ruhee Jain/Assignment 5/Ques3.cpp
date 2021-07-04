/*

Question 3: The intersection of two arrays contains the elements common to both the arrays. The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4

*/

#include <iostream>
using namespace std;

void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else 
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
 
int main()
{   
    int n,m;
    cin>>n>>m;
    int arr1[n]; 
    int arr2[m];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<endl;
    for(int j=0; j<m; j++){
        cin>>arr2[j];
    }

    printIntersection(arr1, arr2, m, n);
 
    return 0;
}
