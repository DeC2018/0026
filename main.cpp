#include <iostream>
#include <vector>
#include <cassert>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int i = 0;

        for (const int num : nums) {
            if (i < 1 || num > nums[i - 1]) {
                nums[i++] = num;
            }
        }

        return i;
    }
};

int main() {
    Solution solution;

    // Example 1
    std::vector<int> nums1 = {1, 1, 2};
    int k1 = solution.removeDuplicates(nums1);
    std::vector<int> expectedNums1 = {1, 2};
    assert(k1 == expectedNums1.size());
    for (int i = 0; i < k1; i++) {
        assert(nums1[i] == expectedNums1[i]);
    }

    // Output the result for Example 1
    std::cout << "Example 1: k = " << k1 << ", nums = [";
    for (int i = 0; i < k1; i++) {
        std::cout << nums1[i];
        if (i < k1 - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    // Example 2
    std::vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = solution.removeDuplicates(nums2);
    std::vector<int> expectedNums2 = {0, 1, 2, 3, 4};
    assert(k2 == expectedNums2.size());
    for (int i = 0; i < k2; i++) {
        assert(nums2[i] == expectedNums2[i]);
    }

    // Output the result for Example 2
    std::cout << "Example 2: k = " << k2 << ", nums = [";
    for (int i = 0; i < k2; i++) {
        std::cout << nums2[i];
        if (i < k2 - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << "All tests passed!" << std::endl;
    return 0;
}