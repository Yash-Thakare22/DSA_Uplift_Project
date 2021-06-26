#include <iostream>
using namespace std;//intersection of two arrays
int main()
{
    int N, M, i, j;

    cin >> N;
    int arr1[N];
    for (i = 0; i < N; i++)
        cin >> arr1[i];

    cin >> M;
    int arr2[M];
    for (i = 0; i < M; i++)
        cin >> arr2[i];

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }

    return 0;
}