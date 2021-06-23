#include <iostream>
using namespace std;

int main()
{
    int n,k,i;
    cout<<"Enter value of k ";
    cin>>k;
    cout<<"Enter size of array ";
    cin>>n;
    cout<<"Enter array ";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     
    int index;
    for(int i=0;i<k+1;i++)
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
    cout<<a[k-1]<<" Is the"<<k<<"th minimum element";
    
    

    return 0;
}
