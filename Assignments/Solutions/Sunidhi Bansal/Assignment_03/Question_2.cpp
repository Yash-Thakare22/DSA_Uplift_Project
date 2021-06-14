
#include <iostream>

using namespace std;

void swap(int *p,int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}


int main()
{
    int N,M;
    cout<<"Enter the number of rows: "<<endl;
    cin>>M;
    cout<<"Enter the number of columns: "<<endl;
    cin>>N;
    int array[N][M];
    
    for(int i = 0;i < N; i++)
    {
        for(int j = 0;j < M; j++)
        {
            cin>>array[i][j];
        }
    }
    
    for(int i = 0;i < N; i++)
    {
         int start = 0;
         int end = M-1;
         
        for(int j = 0;j < M/2; j++)
        {
            swap(&array[i][start],&array[i][end]);
            start++;
            end--;
        }
    }
    
    cout<<endl;
    for(int i = 0;i < N; i++)
    {
        for(int j = 0;j < M; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


