#include <iostream>
using namespace std;
int main() //printing spiral matrix
{
     int n,m,i,j;
     cin >> m;//rows
     cin >> n;//columns
     int Arr[m][n];
     for(i = 0; i < m; i++)
     {
         for(j = 0; j < n; j++)
         {
             cin >> Arr[i][j];
         }
         
     }


     int k = 0, l = 0;
     while(k < m && l < n)
      {
       for(i = l; i < n; i++)
     {
         cout << Arr[k][i] << " ";
       }
           k++;
      for(i = k; i < m; i++)
      {
         cout << Arr[i][n-1] << " ";
       }
      n--;
     if(k < m)
       {
          for(i = n-1; i >= 0; --i)
            {
              cout << Arr[m-1][i] <<" ";
            }
       m--;
      }
        if(l < n)
         {
             for(i = m-1; i >= k; i--)
                 {
                     cout << Arr[i][l] <<" ";
                  }
            l++;
          }
     }
cout << endl;
return 0;
}

 