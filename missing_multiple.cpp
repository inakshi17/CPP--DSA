#include <iostream>

using namespace std;

int missingMultiple(int nums[], int numsSize, int k) {
    for (int m = 1; ; m++) {
        int target = k * m;
        bool found = false;

        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == target) {
                found = true;
                break;
            }
        }

        if (!found) {
            return target;
        }
    }
}

int main() {
    int numsSize, k;

    cout << "Enter number of elements in array: ";
    if (!(cin >> numsSize) || numsSize <= 0) {
        cout << "Invalid array size.\n";
        return 1;
    }

    int nums[numsSize];

    cout << "Enter " << numsSize << " space-separated elements: ";
    for (int i = 0; i < numsSize; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = missingMultiple(nums, numsSize, k);
    cout << "Smallest missing multiple: " << result << endl;

    return 0;
}
