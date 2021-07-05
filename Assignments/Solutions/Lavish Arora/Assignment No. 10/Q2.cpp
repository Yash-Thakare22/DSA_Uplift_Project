#include <iostream>
using namespace std;
 

int findMinRec(int A[], int n)
{
    
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}
 

int findMaxRec(int A[], int n)
{

    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}
 

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        
    }
 
    cout <<"Minimum:"<<  findMinRec(A, n)<<"\n";
     cout <<"Maximum:"<<  findMaxRec(A, n)<<"\n";
    return 0;
}
