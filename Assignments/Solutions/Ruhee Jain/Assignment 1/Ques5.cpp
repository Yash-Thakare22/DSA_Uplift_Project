/*

Question 5.
    1           1
    1 2       2 1
    1 2 3   3 2 1
    1 2 3 4 3 2 1

*/


#include <iostream>
using namespace std;

int main()
{ 
    int i, j,n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++){
            cout<<j;
        }
        for(j=i*2; j<n*2; j++)
        {
            cout<<" ";
        }
         
        for(j=i; j>=1; j--)
        {
           cout<<j;
        }  
        cout<<endl;
    }
}
