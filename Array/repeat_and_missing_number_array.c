int* repeatedNumber(const int* A, int n1, int *len1) {
    long long sumN = 0,sumSqN = 1 ,sum = 0, sumSq = 1, i;
    int *arr = (int*)malloc(sizeof(int)*2);
    *len1 = 2;
    for(i=0;i<n1;i++){
        sumN+=(long long)A[i];
        sumSqN+=((long long)A[i]*(long long)A[i]);
        sum+=(long long)(i+1);
        sumSq+=((long long)(i+1)*(long long)(i+1));
    }
    arr[0] = (int)(((sumSq - sumSqN) / (sum - sumN)) + sumN - sum) / 2; 
    arr[1] =(int)(sum - sumN + arr[0]);
    return arr;
}