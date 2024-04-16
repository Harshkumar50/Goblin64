#include <iostream>
#include <vector>

void leftSort(std::vector<int>& arr) {
    int n = arr.size();
    int left = 0;

    // Traverse the array
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            // If current element is zero, swap with left pointer
            std::swap(arr[i], arr[left]);
            left++;
        }
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12, 0, 5};

    std::cout << "Original Array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    leftSort(nums);

    std::cout << "Left Sorted Array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
