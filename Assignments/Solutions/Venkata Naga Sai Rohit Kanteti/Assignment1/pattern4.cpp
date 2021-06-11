
/*

     *
    * *
   * * *
    * *
     *


*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
   

	int i,n,k;
	cin >> n;
	int space = n - 1;
 
    
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0;j < space; j++)
            cout<<" ";
 
        // Print i+1 stars
        for (int j = 0;j <= i; j++)
            cout<<"* ";
 
        cout<<endl;
        space--;
    }
 
    
    space = 0;
 

    for (int i = n-1; i > 0; i--)
    {
       for (int j = 0; j < space+1; j++)
            cout<<" ";
        
      
        // Print i stars
        if(i!=n){
            for (int j = 0;j < i;j++)
            cout<<"* ";
        }
        
 
        cout<<endl;
        space++;
    }
    return 0;
}
