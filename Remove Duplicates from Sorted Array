int removeDuplicates(int* nums, int numsSize) {
    int i, j, k;
    
    // iterate through the array
    for (i = 0, j = 1, k = 1; j < numsSize; j++) {
        // if the current element is not equal to the previous element
        if (nums[j] != nums[i]) {
            // copy the current element to the next available position
            nums[k] = nums[j];
            k++;
            i=j;
        }
    }
    
    
    // return the number of unique elements
    return k;
}
