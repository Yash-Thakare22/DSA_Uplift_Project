
#include <iostream>

using namespace std;

void sort(int *array,int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}


int search(int array[],int n,int x)
{
    sort(array,n);
    int mid = 0;
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        mid  = (start + end) / 2;
        if(array[mid] == x)
        {
            break;
        }
        else if(x > array[mid])
        {
            start = mid + 1;
        }
        else if(x < array[mid])
        {
            end  = mid - 1;
        }
    }
    if(start > end)
    {
        mid = -1;
    }
    return mid;
}

int main() {
    
    int n;
    cin>>n;                         
    int array[n];
    for(int i = 0; i < n; i++)
    {
	cin>>array[i];
    }
    int x;
    cin>>x;                             //taking the element to search

    int index = search(array,n,x);
    if(index == -1)
    {
        cout<<"ELement not found "<<endl;
    }
    else
    {
        cout<<"Element found at: "<<index<<endl;
    }
        
    
    return 0;
}