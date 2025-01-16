#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* return_1 = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        int num = target - nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (num == nums[j]) {
                return_1[0] = i;
                return_1[1] = j;
                *returnSize = 2;
                return return_1;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    
    int* result1 = twoSum(nums1, size1, target1, &returnSize1);
    if (returnSize1 == 2) {
        printf("Indices: [%d, %d]\n", result1[0], result1[1]);
    }
    free(result1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;

    int* result2 = twoSum(nums2, size2, target2, &returnSize2);
    if (returnSize2 == 2) {
        printf("Indices: [%d, %d]\n", result2[0], result2[1]);
    }
    free(result2);

    int nums3[] = {3, 3};
    int target3 = 6;
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int returnSize3;

    int* result3 = twoSum(nums3, size3, target3, &returnSize3);
    if (returnSize3 == 2) {
        printf("Indices: [%d, %d]\n", result3[0], result3[1]);
    }

    free(result3);
    return 0;
}