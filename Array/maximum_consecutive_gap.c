int cmp(const void * a,const void * b){
    return *(int*)a - *(int*)b > 0;    
}

int maximumGap(const int* A, int n1) {
    qsort(A,n1,sizeof(int),cmp);
    int max = 0,i;
    for(i=0;i<n1-1;i++){
        if(A[i+1]-A[i] > max)
            max = A[i+1]-A[i];
    }
    return max;
}