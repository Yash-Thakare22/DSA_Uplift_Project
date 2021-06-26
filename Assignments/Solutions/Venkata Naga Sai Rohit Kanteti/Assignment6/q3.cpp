/*
Question 3:Given a sorted array of size N and an integer K. Check if K is present in the array or not.
Example 1:
Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 1
*/

#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int *a,int low,int high,int key)
{  
   
    while(low<=high)
    {   
        int mid = low+(high-low)/2;
        if(a[mid]==key) return mid;
        else if(key<a[mid]) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

int main()
{   int a[100],n;
cin>>n;
cout<<"Enter the elments of the sorted array"<<endl;
for(int i=0;i<n;i++) cin>>a[i];
cout<<"Enter the Element to search"<<" ";
int key;
cin>>key;
int ans = BinarySearch(a,0,n-1,key);
if(ans==-1)cout<<"Element not found";
else cout<<"element found at index "<<ans;

return 0;
}

