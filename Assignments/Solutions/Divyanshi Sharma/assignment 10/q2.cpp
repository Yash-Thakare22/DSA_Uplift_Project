#include <iostream>
using namespace std;

int maximum(int a[], int n)
{
    if(n==1)
    return a[0];
    else
    return max(a[n-1],maximum(a,n-1)) ;
}

int main()
{
    int num;
    cin >> num;
    int a[num];
    for (int i=0; i<num;i++)
    { cin>> a[i];}
    cout << maximum(a,num);

    return 0;
}
