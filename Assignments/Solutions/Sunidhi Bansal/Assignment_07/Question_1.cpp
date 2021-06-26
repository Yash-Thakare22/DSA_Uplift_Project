#include <iostream>

using namespace std;

int main()
{
    int arr[]={4,3,5,5,4,4,5};
    
    for(int i = 0; i < 7; i++)
    {
        int count = 1;
        for(int j = i + 1; j < 7; j++)
        {
            int p = (arr[i] & arr[j]);
            if((p ^ arr[i]) == 0)
            {
                count++;
            }
        }
        if((count ^ 1) == 0)
        {
            cout<<"OUTPUT: "<<arr[i]<<endl;
            break;
        }
    }

    return 0;
}

