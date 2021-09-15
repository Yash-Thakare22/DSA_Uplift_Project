vector<int> Solution::solve(vector<int>& A, int B) {
    int n = A.size();
    vector<int>m(n + 1);
    for (int i = 0; i < n; i++) {
        m[A[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        if (!B) return A;
        if (A[i] != n - i) {
            m[A[i]] = m[n - i];
            swap(A[i], A[m[n - i]]);
            B--;
        }
    }
    return A;
}
