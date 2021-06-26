#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    int count = 0;
    
    int array[N];
    
    for(int i = 0; i < N ; i++)
    {
        cin>>array[i];
    }
    
    for(int i = 0; i < N; i++)
    {
        if(array[i] == 1)
        count++;
    }
    
    cout<<"Output: "<<count;
    return 0;
}
