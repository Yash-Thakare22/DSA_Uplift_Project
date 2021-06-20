#include <iostream>
using namespace std;
int main() //printing a 180 degree rotated matrix
{

     int n,i,j;
        cin >> n;//columns
     int Arr[n][n];
     for(i = 0; i < n; i++)
     {
         for(j = 0; j < n; j++)
         {
             cin >> Arr[i][j];
         }
         
     }


 
    for (int i = n - 1; i >= 0; i--) 
       { for (int j = n- 1; j >= 0; j--)
          {  cout<<Arr[i][j]<<" ";}
        
        cout<<"\n";
       }


 return 0;
  }

 