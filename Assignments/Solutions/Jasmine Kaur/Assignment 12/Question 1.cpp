int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] <= 0) {
            swap(A[i], A[j]);
            j++;
        }
    }
    for (int i = j; i < n; i++) {
        if (abs(A[i]) + j - 1 >= 0 && abs(A[i]) + j - 1 < n) {
            if (A[abs(A[i]) + j - 1] > 0)
                A[abs(A[i]) + j - 1] = -A[abs(A[i]) + j - 1];
        }
    }
    for (int i = j; i < n; i++) {
        if (A[i] > 0)
            return (i - j + 1);
    }
    return (n - j + 1);
}
