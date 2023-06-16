	int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	    int* result = malloc(2 * sizeof(int));  // allocate memory for the result array
	    int complement;
	    int i, j;
	    
	    for (i = 0; i < numsSize; i++) {
	        complement = target - nums[i];  // calculate the complement for each element
	        
	        // check if the complement exists in the array
	        for (j = i+1; j < numsSize; j++) {
	            if (nums[j] == complement) {
	                result[0] = i;
	                result[1] = j;
	                *returnSize = 2;  // set the size of the result array
	                return result;   // return the result array
	            }
	        }
	    }
	    
	    // if no solution is found, return NULL
	    return NULL;
	}
