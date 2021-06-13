
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
    int N;
    cout<<"Enter the number of rows/columns (square matrix): "<<endl;
    cin>>N;
    int array[N][N];
    
    for(int i = 0;i < N; i++)
    {
        for(int j = 0;j < N; j++)
        {
            cin>>array[i][j];
        }
    }
    
    for(int i = 0;i < N; i++)                          //reversing the row elements
    {
         int start = 0;
         int end = N-1;
         
        for(int j = 0;j < N/2; j++)
        {
            swap(&array[i][start],&array[i][end]);
            start++;
            end--;
        }
    }
    
    int mid = 0;
    int flag = 0;
    if(N % 2 == 0)                                     //swapping the rows
    {
        mid = N / 2;
        flag = mid-1;
        for(int i=0;i<N/2;i++)
        {
            for(int j=0;j<N;j++)
            {
                swap(array[mid][j],array[flag][j]);
            }
        mid++;
        flag--;
        }
    }
    else
    {
        mid = (N - 1)/2;
        int flag_1 = mid-1;
        int flag_2 = mid+1;
        for(int i=0;i<mid;i++)
        {
            for(int j=0;j<N;j++)
            {
                swap(array[flag_1][j],array[flag_2][j]);
            }
        flag_1--;
        flag_2++;
        }
    }
    
    
    cout<<endl<<"Rotation of matrix by 180 degree"<<endl;
    for(int i = 0;i < N; i++)
    {
        for(int j = 0;j < N; j++)
        {
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}

