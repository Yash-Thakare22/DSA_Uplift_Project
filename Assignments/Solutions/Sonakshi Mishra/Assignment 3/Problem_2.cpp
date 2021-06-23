#include <iostream>
using namespace std;
int main() //Row reversal
{
    int M, N;
    cin >> M>> N;

    int Arr[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> Arr[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {

            int start = 0, end = N - 1;

            while (start < end)
            {
                int temp;
                temp = Arr[i][start];
                Arr[i][start] = Arr[i][end];
                Arr[i][end] = temp;
                start++;
                end--;
            }
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}