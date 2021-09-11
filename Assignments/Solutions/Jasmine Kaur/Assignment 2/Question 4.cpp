#include <iostream>
using namespace std;
int main()
{
    int max=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) 
      cin>>a[i];
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++) {
            s+=a[j];
            if(s>max) 
              max = s;
        }
    } 
    cout<<max;
    return 0;
}
