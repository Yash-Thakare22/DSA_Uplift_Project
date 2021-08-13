int Solution::sqrt(int A) {
     if (A == 0)
        return 0;
    int start = 1, end = A, ans;
    while (start <= end)
    {
        int a = (start + end) / 2;
        if (a <= A / a)
        {
            start = a + 1;
            ans = a;
        }
        else
            end = a - 1;
    }
    return ans;
}
