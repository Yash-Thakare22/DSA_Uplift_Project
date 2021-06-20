/* Question-3.
    1
    2 3
    4 5 6
    7 8 9 10
*/

#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int m=1;
int i,j;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<" "<<m<<" ";
        m++;
    }
    cout<<endl;
}


return 0;
}
