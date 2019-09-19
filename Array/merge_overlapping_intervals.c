/*Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.
*/
 
 
 
 int cmp(const void * a,const void * b){
     return (((interval*)a)->start - ((interval*)b)->start);
 }
interval* merge(interval *intervals, int sz, int *len) {
    qsort(intervals,sz,sizeof(intervals[0]),cmp);
    int i,j=0;
    interval *arr = (interval*)malloc(sizeof(interval)*sz);
    arr[j].start = intervals[0].start;
    arr[j].end = intervals[0].end;
    for(i=1;i<sz;i++){
        if(arr[j].end >= intervals[i].start){
            arr[j].end = (arr[j].end>intervals[i].end?arr[j].end:intervals[i].end);
        }
        else{
            j++;
            arr[j].start = intervals[i].start;
            arr[j].end = intervals[i].end;
        }
    }
    *len = j+1;
    return arr;
}
