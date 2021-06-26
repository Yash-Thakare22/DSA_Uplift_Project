#include <iostream>

using namespace std;
int search(int arr[],int n)
{int j,count=0;
 for(j=0;j<n;j++)
    {
        count++;
        if(arr[j]==0)
        {return count-1;
            
        }
        
      
    }
    return n;}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   cout<<search(arr,n); 
    
    
}

