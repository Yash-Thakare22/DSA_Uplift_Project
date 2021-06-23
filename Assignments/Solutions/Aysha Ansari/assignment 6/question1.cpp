#include <iostream>

using namespace std;

int main()
{
int n,k;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Enter the element you want to search";
cin>>k;

for(int i=0;i<n;i++){
    if(a[i]==k)
        cout<<i;
}
    return 0;
}
