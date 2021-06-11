#include<iostream>
#include<vector>
using namespace std;


int number(vector<int> arr,int k)
{
    int count=0;
    int n=arr.size();
 for(int i=0;i<n;i++)
 {
   if(arr[i]==k)
   count++;
 }
 return count;
}


int main()
{
vector<int>arr={5,10,40,4,6,5,10};
 int n=arr.size();
for(int i=0;i<n;i++)
{
    if(number(arr,arr[i])>1)
    cout<<arr[i]<<endl;
    break;
}

return 0;
}
