#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >>n;
    int a[n];
    for (int i =0; i<n; i++)
    {
      cin>> a[i];
    }
    int sum =0 , maxm = INT_MIN;
    for (int i =0; i<n; i++)
    {
      sum = sum +a[i];
      if(sum> maxm)
        maxm = sum;
      if(sum<0)
        sum= 0;
    }
    cout << maxm ;
    return 0;
}
