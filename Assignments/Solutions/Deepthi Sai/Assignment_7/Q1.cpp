#include <bits/stdc++.h>
using namespace std;
#define INT_SIZE 32
int main()
{
    int n;cin>>n;
    int result = 0;
    int x, sum,arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    for (int i = 0; i < INT_SIZE; i++) {
 
        sum = 0;
        x = (1 << i);
        for (int j = 0; j < n; j++) {
            if (arr[j] & x)
                sum++;
        }
 
        if ((sum % 3) != 0)
            result = result|x;
    }
 
    cout<<result;
    return 0;
}
