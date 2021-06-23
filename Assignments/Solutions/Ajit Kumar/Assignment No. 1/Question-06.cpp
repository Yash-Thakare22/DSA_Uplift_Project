/* 

question6:
5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 

*/

#include <iostream>
using namespace std;
 
int main()
{
    int n=5;
    for(int i=1; i<=n; i++){
        
        //print number in decreasing order
        for(int j=n; j>=i; j--){
            cout<<j<<" ";
        }

        cout<<endl;        

    }

}