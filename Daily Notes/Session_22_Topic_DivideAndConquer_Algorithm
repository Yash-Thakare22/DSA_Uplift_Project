Divide: Break the given problem into subproblems of same type
Conquer: Recursively solve these subproblems
Combine: Appropriately combine the answers

Merge Sort 

#include <iostream>
using namespace std;
void merge(int *a,int start,int mid,int end) //conquer
{
    int temp[end-start+1];
    int i=start , j=mid+1,k=0;
    
    while(i<=mid && j<=end)
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    
    while(i<=mid)
        temp[k++]=a[i++];
    
    while(j<=end) 
        temp[k++]=a[j++];
    
    for(i=start;i<=end;i++)
    {
        a[i]=temp[i-start];
    }
}
void mergeSort(int *a,int start, int end) //divide
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    mergeSort(a,0,n-1);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}


Best Case-O(nlogn)
Worst Case-O(nlogn)


Quick Sort 

https://www.geeksforgeeks.org/quick-sort/

Best Case-O(nlogn)
Worst Case-O(n^2)



Master Theorem

https://www.geeksforgeeks.org/advanced-master-theorem-for-divide-and-conquer-recurrences/
https://www.programiz.com/dsa/master-theorem
https://www.geeksforgeeks.org/master-theorem-subtract-conquer-recurrences/?ref=rp
