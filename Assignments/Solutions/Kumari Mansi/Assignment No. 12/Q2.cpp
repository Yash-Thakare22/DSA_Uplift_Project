//  https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &x, vector<int> &y)
{
    int n = x.size(), ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(x[i] - x[i + 1]) <= abs(y[i] - y[i + 1]))
            ans += abs(y[i] - y[i + 1]);
        else
        {
            ans += abs(x[i] - x[i + 1]);
        }
    }
    return ans;
}