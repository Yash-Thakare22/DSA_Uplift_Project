#include <bits/stdc++.h>
using namespace std;
 

int singlenumber(int a[],int N)
{
  
    unordered_map<int,int>fmap;
   

    for(int i = 0; i < N;i++)
    {
        fmap[a[i]]++;
    }
   
 
    for(auto it:fmap)
    {
       
 
        if(it.second == 1)
        {
           
            return it.first;
        }
    }
}
 

int main()
{
    int a[]={12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 9};
   
    int N=sizeof(a)/sizeof(a[0]);
   
    cout << singlenumber(a,N);
    return 0;
}