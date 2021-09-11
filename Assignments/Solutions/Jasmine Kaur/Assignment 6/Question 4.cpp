#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==1) 
          s++;
    }
    cout<<s;
    return 0;
}
