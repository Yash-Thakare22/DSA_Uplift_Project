#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
}
int k;
cout<<"enter the kth smallest value you want to display";
cin>>k;
cout<<"the smallest value at k :="<<a[k-1];
    return 0;
}
