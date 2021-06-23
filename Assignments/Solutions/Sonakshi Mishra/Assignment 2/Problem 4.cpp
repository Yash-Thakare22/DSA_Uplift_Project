#include <iostream>
using namespace std;
int main()
{
    int max_sum = 0;
    int ele;//number of elements
    cin >> ele;
    int Arr[ele];
    for (int i = 0; i < ele; i++)
      {  cin >> Arr[i];}
    for (int i = 0; i < ele; i++)
    {
        int sum = 0;
        for (int j = i; j < ele; j++)
        {
            sum += Arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum;
    return 0;
}
