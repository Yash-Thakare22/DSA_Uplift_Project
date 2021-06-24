/*
@Question 4

Given an array arr[] of N integers. Find the contiguous sub-array with maximum sum
Hint: Kadane’s Algorithm

I/P:
8
-2 -3 4 -1 -2 1 5 -3

O/P:
7
*/

#include <iostream>
using namespace std;
int main()
{
    int maxSum = 0;
    int a[8] ={-2,-3, 4, -1, -2, 1, 5, -3};

    for (int i = 0; i < 8; i++)
    {
        int sum = 0;
        for (int j = i; j < 8; j++)
        {
            sum += a[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum;
    return 0;
}
