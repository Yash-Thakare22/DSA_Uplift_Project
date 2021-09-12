#include <iostream>
using namespace std;

int findMinRec(int A[], int n) {
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}

int findMaxRec(int A[], int n) {
    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}

int main() {
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"min = "<<findMinRec(A, n)<<", "<<"max = "<<findMaxRec(A, n);
    return 0;
}
