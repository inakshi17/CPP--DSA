#include <iostream>
using namespace std;

int* getConcatenationAndReverse(int* nums, int n) {
    int* ans = new int[2 * n];

    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[n - 1 - i];
    }
    return ans;
}

int main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int* ans = getConcatenationAndReverse(nums, n);

    cout << "ans = [";
    for (int i = 0; i < 2 * n; i++) {
        cout << ans[i] << (i == 2 * n - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    delete[] ans;
    return 0;
}
