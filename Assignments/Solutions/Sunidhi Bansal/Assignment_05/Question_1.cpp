
#include <iostream>

using namespace std;

void sort(int *a,int N)
{
   int index;
    for(int i = 0;i < N - 1; i++)
    {
        index=i;
        for(int j = i + 1; j < N; j++)
        {
            if(a[j] < a[index])
            {
                index = j;
            }
        }
        int temp = a[index];
        a[index] = a[i];
        a[i] = temp;
    }
}

int main()
{
    int N;
    cin>>N;
    
    int array[N];
    for(int i = 0; i < N; i++)
    {
        cin>>array[i];
    }
    
    sort(array,N);
    
    for(int i = 0; i < N; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}




