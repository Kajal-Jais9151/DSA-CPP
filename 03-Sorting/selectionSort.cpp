
#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& nums) {
    int n = nums.size();

    for (int boundary = 0; boundary < n - 1; boundary++) {
        int minIndex = boundary;

        for (int current = boundary + 1; current < n; current++) {
            if (nums[current] < nums[minIndex]) {
                minIndex = current;
            }
        }

        if (boundary != minIndex) {
            swap(nums[boundary], nums[minIndex]);
        }
    }

    return nums;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    selectionSort(nums);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
