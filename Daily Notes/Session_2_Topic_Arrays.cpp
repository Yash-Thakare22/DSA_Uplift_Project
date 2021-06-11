Question 1:
Given an array, write program to find the minimum and maximum elements in it

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int min=a[0], max=a[0];
    //function for finding minimum element
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    
    //function for finding maximum element
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    cout<<min<<endl;
    cout<<max<<endl;
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Question 2:
Given an array, write program to find the sum of all elements

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Question 3:
Given an array, the task is to reverse the array

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int start=0,end=n-1;
    
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 4:
Given an array, a[] and an element x, find a number of occurrences of x in a[]

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
    cin>>ele;
    int count = 0;
    for (int i=0;i<n;i++)
       if (a[i]==ele)
          count++;
    cout<<count<<endl;
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 5:
You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. 
Write an efficient code to find the missing integer

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    int total=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
        total-=a[i];
    cout<<total<<endl;
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
Question 6:
Given an array arr[] of size n,write program to find its prefix sum array

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int prefix[n];
    prefix[0]=a[0];
    
    // Adding present element with previous element
    for (int i=1;i<n;i++)
        prefix[i]=prefix[i-1]+a[i];
    for(int i=0;i<n;i++)
        cout<<a[i];
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Question 7:
Given an 2D array, write program to find transpose of matrix (Square Matrix)
  
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            swap(a[i][j],a[j][i]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
