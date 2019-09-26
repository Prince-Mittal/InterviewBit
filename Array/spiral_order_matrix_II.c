int ** generateMatrix(int A, int *len1, int *len2) {
    *len1 = A;
    *len2 = A;
    int **arr = (int**)malloc(sizeof(int*)*A);
    int i;
    for(i=0;i<A;i++){
        arr[i] = (int*)malloc(sizeof(int)*A);
    }
    int a = 0,b = A-1, c = A-1, d = 0,count = 1;
    while(a<=c && d<=b){
        for(i=d;i<=b;i++)
            arr[a][i] = count++;
        a++;
        for(i=a;i<=c;i++)
            arr[i][b] = count++;
        b--;
        for(i=b;i>=d;i--)
            arr[c][i] = count++;
        c--;
        for(i=c;i>=a;i--)
            arr[i][d] = count++;
        d++;
    }
    return arr;
}