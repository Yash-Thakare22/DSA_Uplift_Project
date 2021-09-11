#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==0) c++;}

    for(int i=0;i<n;i++){
        if(i<c) a[i] = 0;
        else a[i] = 1;
    }

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
