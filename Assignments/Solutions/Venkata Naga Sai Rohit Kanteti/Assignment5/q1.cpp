/*
 
Question 1:Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
Input: 
5
1 0 1 1 0
Output:
0 0 1 1 1

*/

#include<bits/stdc++.h>

using namespace std;
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
int main()
{
    int a[100],n,j=-1;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Input array"<<" ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    for(int i=0;i<n;i++)
    {
        if(a[i]<1)
        {
            j++;
            swap(&a[i],&a[j]);
        }
    }
    cout<<endl<<"Sorted array"<<" ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
