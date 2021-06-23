#include <iostream>
using namespace std;
int main()
{
    int ele, i,j=0;
    cin >> ele;//number of elements
    int arr[ele];
    for (i = 0; i < ele; i++)
     {   cin >> arr[i];
         
     }
 
    for (i = 0; i < ele; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for (i = 0; i < ele; i++)
        cout << arr[i] << " ";
    return 0;
}