#include <iostream>
using namespace std;//number coming only once in the array
  
int main() 
{ 
     int x;
    int n;
       cin >> n;
    int arr[n];
   
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++)
    {
        int count = 1;
        for(int j = i + 1; j < n; j++)
        {
            int p = (arr[i] & arr[j]);
            if((p ^ arr[i]) == 0)
            {
                count++;
            }
        }
        if((count ^ 1) == 0)
        {
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0; 
}
