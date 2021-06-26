
#include <iostream>

using namespace std;

void sort(int array[],int n);

int main()
{
    int N,k;
    cout<<"N= ";
    cin>>N;
    cout<<"K= ";
    cin>>k;
    cout<<"Enter the elements: "<<endl;
    int array[N];
    for(int i = 0; i < N; i++)
    {
        cin>>array[i];
    }
    
    sort(array,N);
    cout<<array[k-1];
    
    return 0;
}
void sort(int array[],int n)
{
    int min = 0;
    for(int i = 0; i < n - 1; i++)
        {
            min = i;
            for(int j = i+1; j < n; j++)
            {
                if(array[j] < array[min])
                {
                    min = j;
                }
            }
            if(i != min)
            {
                int temp = array[min];
                array[min] = array[i];
                array[i] = temp;
            }
        }
}

