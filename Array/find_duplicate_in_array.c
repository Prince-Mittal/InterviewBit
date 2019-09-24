int repeatedNumber(const int* A, int n1) {
    int xor = 0,i;
        for (i = 1; i<n1; i++) {
            xor^= A[i];
            xor^= i;
        }
        xor^= A[0];
        return xor;
}