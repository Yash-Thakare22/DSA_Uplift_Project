#include <iostream>

using namespace std;//find the kth smallest element in the array.

int main()
{ int N,temp,k;//N is number of elements
    
    cin>>N>>k;
    int Arr[N];
    for (int i=0;i<N;i++)
       {
           cin>>Arr[i];
       }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (Arr[i] > Arr[j])
            {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }    
    cout<<"\n"<<Arr[k-1];
    return 0;
}
