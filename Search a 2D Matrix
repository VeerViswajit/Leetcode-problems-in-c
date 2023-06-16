bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int m = matrixSize;
    int n = *matrixColSize;
    int left = 0, right = m*n-1;
    int pivotIdx,pivotElement;

    while(left<=right){
        pivotIdx = left+(right-left)/2;
        pivotElement = matrix[pivotIdx/n][pivotIdx%n];

        if(target == pivotElement){
            return true;
        }
        else{
            if(target<pivotElement){
                right = pivotIdx-1;
            }
            else{
                left = pivotIdx+1;
            }
        }
    }
    return false;
}
