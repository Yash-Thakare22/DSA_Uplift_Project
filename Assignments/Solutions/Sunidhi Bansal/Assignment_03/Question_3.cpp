
#include <iostream>

using namespace std;

int main()
{
    int M,N;
    cout<<"Enter the number of  rows "<<endl;
    cin>>M;
    cout<<"Enter the number of columns "<<endl;
    cin>>N;
    int array[M][N];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int top = 0;
    int bottom = M - 1;
    int left = 0;
    int right = N - 1;
    int dir = 0;
    while(top <= bottom && left <= right)
    {
        if(dir == 0)
        {
            for(int i = left;i <= right;i++)
            {
                cout<<array[top][i]<<" ";
            }
            top++;
        }
        else if(dir == 1)
        {
            for(int i = top;i <= bottom;i++)
            {
                cout<<array[i][right]<<" ";
            }
            right--;
        }
        else if(dir == 2)
        {
            for(int i = right;i >= left;i--)
            {
                cout<<array[bottom][i]<<" ";
            }
            bottom--;
        }
        else if(dir == 3)
        {
            for(int i = bottom;i >= top;i--)
            {
                cout<<array[i][left]<<" ";
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }

    return 0;
}


