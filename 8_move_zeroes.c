void moveZeroes(int* nums, int numsSize) {
    int pos = 0;
    
    // Move all non-zero numbers to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }
    
    // Fill remaining places with 0
    for (int i = pos; i < numsSize; i++) {
        nums[i] = 0;
    }
}
