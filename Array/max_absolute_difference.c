int maxArr(int* A, int n1) {
    int max1 = INT_MIN , min1 = INT_MAX,i;
    int max2 = INT_MIN , min2 = INT_MAX;
    for(i=0;i<n1;i++){
        max1 = max1 > (A[i]+i) ? max1 : (A[i]+i);
        min1 = min1 < (A[i]+i) ? min1 : (A[i]+i);
        max2 = max2 > (A[i]-i) ? max2 : (A[i]-i);
        min2 = min2 < (A[i]-i) ? min2 : (A[i]-i);
    }
    return ((max1-min1) > (max2-min2) ? (max1-min1) : (max2-min2));
}