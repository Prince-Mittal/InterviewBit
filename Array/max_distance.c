struct array{
     int index;
     int value;
 };
 int cmpfun(const void * a,const void * b){
     int first = ((struct array*)a)->value;
     int second = ((struct array*)b)->value;
     return first - second > 0;
 }
int maximumGap(const int* A, int n1) {
    if(n1 == 0)
        return -1;
    int i;
    struct array *arr =(struct array*)malloc(sizeof(struct array)*n1);
    for(i=0;i<n1;i++){
        arr[i].index = i;
        arr[i].value = A[i];
    }
    qsort(arr,n1,sizeof(arr[0]),cmpfun);
    int min = arr[0].index;
    int max = 0;
    for(i=1;i<n1;i++){
        if(arr[i].index - min > max){
            max = arr[i].index - min;
        }
        min = (arr[i].index<min?arr[i].index:min);
    }
    if(max != 0)
        return max;
    return 0;
}