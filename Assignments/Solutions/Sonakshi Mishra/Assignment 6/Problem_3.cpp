
#include <iostream>
using namespace std;//Checking if integer K is present in a sorted array or not.

int main()
{
    int K;
    int N,c=0;
       cin >> N;
    int arr[N];
   
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    
    cin >> K;
    int i;
    for (i = 0; i < N; i++)
    {
        if (arr[i] == K)
        {
            cout <<1<<endl;
            c++;
            break;
        }
    }
    if (c==0)
        cout <<0;
    return 0;
}

