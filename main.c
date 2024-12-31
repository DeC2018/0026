#include <stdio.h>
#include <assert.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0; // Handle empty array case

    int c = 1; // Start counting unique elements
    for (int i = 1; i < numsSize; i++) { // Start from the second element
        if (nums[i] != nums[c - 1]) {
            nums[c] = nums[i]; // Update the unique element position
            c++;
        }
    }
    return c; // Return the count of unique elements
}

int main() {
    // Example 1
    int nums1[] = {1, 1, 2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1 = removeDuplicates(nums1, size1);
    int expectedNums1[] = {1, 2};
    assert(k1 == sizeof(expectedNums1) / sizeof(expectedNums1[0]));
    for (int i = 0; i < k1; i++) {
        assert(nums1[i] == expectedNums1[i]);
    }

    // Output the result for Example 1
    printf("Example 1: k = %d, nums = [", k1);
    for (int i = 0; i < k1; i++) {
        printf("%d", nums1[i]);
        if (i < k1 - 1) printf(", ");
    }
    printf("]\n");

    // Example 2
    int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2 = removeDuplicates(nums2, size2);
    int expectedNums2[] = {0, 1, 2, 3, 4};
    assert(k2 == sizeof(expectedNums2) / sizeof(expectedNums2[0]));
    for (int i = 0; i < k2; i++) {
        assert(nums2[i] == expectedNums2[i]);
    }

    // Output the result for Example 2
    printf("Example 2: k = %d, nums = [", k2);
    for (int i = 0; i < k2; i++) {
        printf("%d", nums2[i]);
        if (i < k2 - 1) printf(", ");
    }
    printf("]\n");

    printf("All tests passed!\n");
    return 0;
}