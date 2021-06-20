#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispresent(vector<int>b,int n)
{
 for(int i=0;i<b.size();i++) 
 {
   if(n==b[i]){
   return true;
   break;
       
   }
 }
 return false;
}


int main()
{
int n,m;
vector<int>b ;
cin>>n;
int arr1[n];
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
cin>>m;
int arr2[m];
for(int i=0;i<m;i++)
{
cin>>arr2[i];
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
     if(arr1[i]==arr2[j])
     {
        if(ispresent(b,arr1[i])==false)
        b.push_back(arr1[i]);
     }
     
    }
}
for(int i=0;i<b.size();i++)
{
    cout<<b[i]<<" ";
}
return 0;
}

//time complexity=O(nm) space complexity=O(n+m)
