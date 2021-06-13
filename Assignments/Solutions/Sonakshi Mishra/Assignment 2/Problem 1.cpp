
#include <iostream>

using namespace std;

int main()
{ int ele,temp;//ele is number of elements
    
    cin>>ele;
    int Arr[ele];
    for (int i=0;i<ele;i++)
       {
           cin>>Arr[i];
       }
    
    for (int i = 0; i < ele; i++)
    {
        for (int j = i; j < ele; j++)
        {
            if (Arr[i] > Arr[j])
            {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }    
    for (int i=0;i<ele;i++)
       {
           cout<<Arr[i]<<" ";
       }
}
