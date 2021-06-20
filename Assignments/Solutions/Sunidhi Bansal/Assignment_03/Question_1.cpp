
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    int array[N][N];
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin>>array[i][j];
        }
    }
    
    cout<<"Principal Diagonal: "<<endl;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
            {
                cout<<array[i][j]<<", ";
            }
        }
    }
    
    cout<<endl<<"Secondary Diagonal: "<<endl;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i + j == N - 1)
            {
                cout<<array[i][j]<<", ";                
            }
        }
    }
    

    return 0;
}




