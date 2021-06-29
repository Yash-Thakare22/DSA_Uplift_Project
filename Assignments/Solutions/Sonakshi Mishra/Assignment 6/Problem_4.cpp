
#include <iostream>
using namespace std;//print the count of 1s in the binary array
int main()
{
   
    int N,c=0;
       cin >> N;
    int arr[N];
   
    for (int i = 0; i < N; i++)
      {
          cin >> arr[i];
          if(arr[i]!=0 || arr[i]!=1)
          {
              return 0;
          }
      }

    

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 1)
        {
            c++;
            
        }
    }
    
    cout<<c;
    return 0;
}

