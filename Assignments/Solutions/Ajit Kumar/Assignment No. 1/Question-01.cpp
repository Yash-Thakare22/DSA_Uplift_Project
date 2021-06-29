/*
Question1
             *  *  *  *  *
          *  *  *  *  *
       *  *  *  *  *
    *  *  *  *  *
 *  *  *  *  *
*/  
  
#include <iostream>
using namespace std;

int main()
{
    int n=5;
    //cin>>n;
    
    for(int i=1; i<=n; i++){
        
        // Print space in decreasing order 
        for(int j=n-1; j>=i; j--){
            cout<<"   ";
        }
        
        // Print 5 * in each rows 
        for( int k=1; k<=n; k++){
            cout<<" * ";
        }
        
        cout<<endl;
    }
    return 0;

}


// Visualise Code here https://cutt.ly/vnAygZi

// This code is contributed by @_aj7t