// https://www.interviewbit.com/problems/excel-column-number/

int Solution::titleToNumber(string A)
{
    int x = 0;
    for (int i = 0; i < A.size(); i++)
    {
        x = x * 26 + (A[i] - 'A' + 1);
    }
    return x;
}
