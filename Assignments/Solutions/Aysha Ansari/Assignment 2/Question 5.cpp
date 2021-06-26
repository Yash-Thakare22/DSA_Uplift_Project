#include <iostream>
#include <climits>
using namespace std;



int First_Repeating_element(int a[], int n)
{
    const int N = 1e6+2;
    int idx[N];

    for(int i=0; i<N; i++)
        idx[i] = -1;

    int min_idx = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(idx[a[i]] != -1)
        {
            min_idx = min(min_idx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if(min_idx == INT_MAX)
        return -1;
    else
        return min_idx+1;
}

int main()
{
    int a[] = {5, 10, 40, 4, 6, 5, 10};
    int n = sizeof(a)/sizeof(a[0]);

    int i = First_Repeating_element(a,n);
    cout<<a[i-1];
  return 0;
}
