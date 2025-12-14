int delete(int A[], int n, int p) {
    for (int i = p; i < n - 1; i++) {
        A[i] = A[i + 1];
    }
    return n - 1;
}
