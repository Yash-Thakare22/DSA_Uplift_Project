/*Question 3
https://www.geeksforgeeks.org/recursive-bubble-sort/
*/
#include <iostream>
using namespace std;
void sort(int a[], int n)
{
    int temp;
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i + 1];
            a[i + 1] = a[i];
            a[i] = temp;
        }
    }
    sort(a, n - 1);
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, n);
    print(a, n);
    return 0;
}
