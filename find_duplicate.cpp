#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(const vector<int>& nums) {
    int low = 1;
    int high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = 0;
        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }
        if (count > mid) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
int main() {
    int size;
    cout << "Enter total number of elements (N + 1): ";
    if (!(cin >> size) || size <= 1) {
        cerr << "Invalid input. Size must be greater than 1.\n";
        return 1;
    }
    vector<int> nums(size);
    cout << "Enter " << size << " integers (values between 1 and " << size - 1 << "): \n";
    for (int i = 0; i < size; ++i) {
        cout << "nums[" << i << "] = ";
        cin >> nums[i];
    }
    int duplicate = findDuplicate(nums);
    cout << "\n--> The duplicate number is: " << duplicate << " <--\n";
    return 0;
}
