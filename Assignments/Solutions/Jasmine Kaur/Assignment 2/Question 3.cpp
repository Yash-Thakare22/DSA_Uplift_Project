#include <iostream>
using namespace std;
int main(){
    int n=5;
    int a[n] = {1,2,3,4,5};
    int t = a[n-1];
    for(int i=n-1;i>0;i--) a[i] = a[i-1];
    a[0] = t;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

}
