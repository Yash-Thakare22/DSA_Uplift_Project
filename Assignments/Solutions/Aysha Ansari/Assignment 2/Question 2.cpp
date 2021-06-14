#include <iostream>
using namespace std;
int main()
{ int n;
cin>>n;
 int a[n];
 int t;
for(int i=0;i<n;i++){
    cin>>a[i];
}
 int i=0 ,j=n-1;
    while(1){
        while(a[i]<0&&i<j){
            i++;
        }
        while(a[j]>0&&i<j){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
        else
        break;
    }
        
      for(int i=0;i<n;i++){
    cout<<a[i];  
    
}
    return 0;
}
