int maxSubArray(const int* A, int n1) {
    int sum=A[0],max=A[0],i;
    for(i=1;i<n1;i++){
        if(sum+A[i] > A[i]){
            sum = sum+A[i];
        }
        else
            sum = A[i];
        if(sum > max)
            max = sum;
    }
    return max;
}