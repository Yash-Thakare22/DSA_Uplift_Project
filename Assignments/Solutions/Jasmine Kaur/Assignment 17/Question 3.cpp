int Solution::bulbs(vector<int>& A) {
    int c = 0, s = 0;
    int n = A.size();
    for (int i = 0; i < n; i++) {
        if (A[i] == s) {
            c++;
            s = 1 - s;
        }
    }
    return c;
}
