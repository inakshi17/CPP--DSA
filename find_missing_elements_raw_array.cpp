#include <iostream>
#include <algorithm>

using namespace std;

int* findMissingElements(int nums[], int numsSize, int* returnSize) {
    if (numsSize == 0) {
        *returnSize = 0;
        return nullptr;
    }

    int minVal = nums[0], maxVal = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < minVal) minVal = nums[i];
        if (nums[i] > maxVal) maxVal = nums[i];
    }

    int totalRange = maxVal - minVal + 1;
    int maxPossibleMissing = totalRange - numsSize;
    int* result = new int[maxPossibleMissing];

    int k = 0;
    for (int target = minVal; target <= maxVal; target++) {
        bool found = false;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == target) {
                found = true;
                break;
            }
        }
        if (!found) {
            result[k++] = target;
        }
    }

    *returnSize = k;
    return result;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Missing elements: []" << endl;
        return 0;
    }

    int* nums = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int returnSize = 0;
    int* result = findMissingElements(nums, n, &returnSize);

    cout << "Missing elements: [";
    for (int i = 0; i < returnSize; i++) {
        cout << result[i] << (i == returnSize - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    delete[] nums;
    delete[] result;
    return 0;
}
