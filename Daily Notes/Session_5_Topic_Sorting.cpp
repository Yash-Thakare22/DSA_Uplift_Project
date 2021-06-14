Question 1:
Bubble Sort Implementation

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
 
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}

Best-O(n^2)  
Worst-O(n^2)
  
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 2:
Modified Bubble Sort Implementation


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

Best-O(n) - Array is already sorted 
Worst-O(n^2)
  
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 3:
Selection Sort Implementation

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     
    int index;
    for(int i=0;i<n-1;i++)
    {
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[index])
            {
                index=j;
            }
        }
        int temp=a[index];
        a[index]=a[i];
        a[i]=temp;
    }
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}

Best-O(n^2)  
Worst-O(n^2)
  
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Question 4:
Insertion Sort Implementation

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     
    int ele;
    for(int i=1;i<n;i++)
    {
        ele=a[i];
        for(int j=i-1;j>=0 && a[j]>ele;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=ele;
    }
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}

Best-O(n)- Array is already sorted 
Worst-O(n^2)
  
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Important Terminologies:

1.Adaptive and Non-Adaptive Sorting Algorithms
2.Comparison based Sorting
3.Inplace and Outplace Sorting
4.Stable and Unstable Sorting
