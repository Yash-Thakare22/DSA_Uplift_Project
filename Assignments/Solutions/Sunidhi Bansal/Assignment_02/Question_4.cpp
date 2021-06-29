
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int  array[N];
    for(int i = 0;i < N; i++) {
       cin>>array[i]; 
    }
    int sum = 0;
    int max = array[0];
     
    for(int i = 0;i < N; i++) {
        sum += array[i];
        if(sum > max) {
            max = sum;
        }
        if(sum<0) {
            sum = 0;
        }
    }
    cout<<max<<endl;
    return 0;
}

