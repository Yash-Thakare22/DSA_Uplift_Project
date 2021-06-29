#include <iostream>

using namespace std;

bool is_k_present(int array[],int N,int K)
{
    for(int i = 0; i < N; i++)
    {
        if(K == array[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int N;
    cin>>N;
    
    int array[N];
    
    int K;
    cin>>K;
    
    for(int i = 0; i < N; i++)
    {
        cin>>array[i];
    }
    
    if(is_k_present(array,N,K))
    {
        cout<<K<<" is present in the array. ";
    } 
    else {
        cout<<K<<" is not present in the array. ";
    }
    
    return 0;
}
