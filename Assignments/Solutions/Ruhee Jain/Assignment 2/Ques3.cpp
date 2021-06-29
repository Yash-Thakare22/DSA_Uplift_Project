/*


Question 3

Given an array, cyclically rotate the array clockwise by one

I/P:
1 2 3 4 5

O/P:
5 1 2 3 4


*/



# include <iostream>
using namespace std;


void rotate(int a[], int n)
{
    int x = a[n - 1], i;
    for (i = n - 1; i > 0; i--)
    a[i] = a[i - 1];
    a[0] = x;
}
 

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
    cout << "Given array is \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
 
    rotate(a, n);
 
    cout << "\nRotated array is\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
 
    return 0;
}
