 struct interval{
    int arrival;
    int departure;
};
int cmpfun(const void * a,const void * b){
    int first = ((struct interval*)a)->arrival;
    int second = ((struct interval*)b)->arrival;
    return first - second > 0;
}
int hotel(int* arrive, int n1, int* depart, int n2, int K) {
    int i,allocated=0,flag=0,j;
    int *arr = (int*)malloc(sizeof(int)*K);
    struct interval *arr1 = (struct interval*)malloc(sizeof(struct interval)*n1);
    for(i = 0;i<n1;i++){
        arr1[i].arrival = arrive[i];
        arr1[i].departure = depart[i];
    }
    qsort(arr1,n1,sizeof(arr1[0]),cmpfun);
    for(i = 0;i<n1;i++){
        arrive[i] = arr1[i].arrival;
        depart[i] = arr1[i].departure;
    }
    for(i=0;i<n1;i++){
        if(arrive[i] == depart[i])
            continue;
        if(allocated < K){
            arr[allocated] = depart[i];
            allocated++;
        }
        else{
            flag = 0;
            for(j=0;j<K;j++){
                if(arr[j] <= arrive[i]){
                    arr[j] = depart[i];
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                return 0;
        }
    }
    return 1;
}