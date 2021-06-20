#include <iostream>
using namespace std;//program to sort binary array
int main()      
{
    int ele, i,k=0,l=0;
    cin >> ele;//number of elements
    int A[ele];
    for (i = 0; i < ele; i++)
     {   cin >> A[i];
        if(A[i]==0)
        {
           k++; 
        }
        else if (A[i]==1)
        {
            l++;
        }
        else 
        {
            cout<<"Not binary array,error"<<"\n";
        
            return 0;
        }
     }
 
    for (i = 0; i < k; i++)
    {
        A[i]=0;
    }
    for (i = k; i < l; i++)
    {
        A[i]=1;
    }
    for (i = 0; i < ele; i++)
        cout << A[i] << " ";
    return 0;
}
