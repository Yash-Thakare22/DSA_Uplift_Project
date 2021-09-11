
#include <iostream>
using namespace std;
int main()
{
    int n=7;
    int a[n] = {5 ,10 ,40 ,4, 6, 5, 10};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i] == a[j])
            {
              cout<<a[i]; 
              return 0;
            }
        }
    }
    return 0;
}
