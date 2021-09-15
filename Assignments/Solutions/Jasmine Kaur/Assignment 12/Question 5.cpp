int Solution::sqrt(int A) {
    if (A == 0)
        return 0;
    int start = 1, end = A, ans;
    while (start <= end) {
        int m = (start + end) / 2;
        if (m <= A / m) {
            start = m + 1;
            ans = m;
        } else
            end = m - 1;
    }
    return ans;
}
