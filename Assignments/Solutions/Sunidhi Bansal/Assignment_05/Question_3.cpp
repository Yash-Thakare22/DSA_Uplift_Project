
#include <iostream>

using namespace std;

void finding_intersection(int arr1[],int N,int arr2[],int M)
{
    int i = 0;
    int j = 0;
    cout<<"Output : ";
    while(i < N && j < M)
        {
            if(arr1[i]<arr2[j])
            {
                i++;
            }
            else if(arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" ";
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
}

int main()
{
    int N,M;
    cout<<"N = ";
    cin>>N;
    cout<<"M = ";
    cin>>M;
    
    int arr1[N];
    cout<<"Enter the elements of array 1: "<<endl;
    for(int i = 0; i < N; i++)
    {
        cin>>arr1[i];
    }
    
    int arr2[M];
    cout<<"Enter the elements of array 2: "<<endl;
    for(int i = 0; i < M; i++)
    {
        cin>>arr2[i];
    }
    
    int length = 0;
    
    finding_intersection(arr1,N,arr2,M);

    return 0;
}





