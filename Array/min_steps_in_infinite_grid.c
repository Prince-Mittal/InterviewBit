int coverPoints(int* A, int n1, int* B, int n2) {
    int moveX=0,moveY=0,max=0,i,count=0;
    for( i = 0;i<n1-1;i++){
        moveX = A[i+1] - A[i];
        moveY = B[i+1] - B[i];
        if(moveX < 0)
            moveX *= -1;
        if(moveY < 0)
            moveY *= -1;
        max = moveX > moveY ? moveX : moveY;
        count+=max;
    }
    return count;
}