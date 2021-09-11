// 1  
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1
// Q7
#include <iostream>
using namespace std;
int main(){
    int p=1;
    cout<<1<<endl;
    for(int i=1;i<6;i++){
        for(int j=0;j<=i;j++){
            if(j==0) p = 1;
            else p=p*(i-j+1)/j;        
        cout<<p<<" ";
        }cout<<endl;
    }
    return 0;
}
