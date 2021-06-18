#include <iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   cout<<"enter the elements of first array";
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
    cout<<"enter the elements of second array";
   for(int i=0;i<n;i++){
       cin>>b[i];
   }
int i=0,j=0;
while(i<n&&j<m){
    if(a[i]<b[j]){
        i++;
    }
    else if(a[i]>b[j]){
        j++;
    }
else{
    cout<<a[i];
    i++;
    j++;
}
}
    return 0;
}
