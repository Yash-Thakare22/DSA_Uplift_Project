#include <iostream>
using namespace std;

void bubblesort(int a[], int n)
{
    if(n==0)
    return ;
    else
    { for (int i=0;i<n-1;i++)
        if(a[i]>a[i+1])
        {
            int temp= a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        return bubblesort(a,n-1);
    }
}

int main()
{
    int num;
    cin >> num;
    int array[num];
    for (int i=0; i<num;i++)
    { cin>> array[i];}
    bubblesort(array,num);
    for (int i=0; i<num;i++)
    { cout<< array[i]<<" ";}

    return 0;
}
