 /* Question 2.
Move all negative numbers to beginning and positive to the end of the given array */
//Two pointer approach (left and right)
#include<iostream>
using namespace std;
void setArray(int arr[100],int left,int right)
{
    while(left<=right)
    {
        if(arr[left]<0 && arr[right]<0)
        {
            left++; //since the element in left pointer is in right positionso increment left pointer but not decrement right
            //pointer because right pointer element is not in correct place
        }
        else if(arr[left]>0 && arr[right]<0)
        {
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        else if(arr[left]>0 && arr[right]>0)
        {
            right--;
        }
        else 
        {
           left++;
           right--;
        }
    }
}
void disArr(int arr[],int num)
{
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int i,n,arr[100];
    cout<<"enter the num of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>arr[i];  
    }
    setArray(arr,0,n-1);
    disArr(arr,n);
    
    
}




    
    
