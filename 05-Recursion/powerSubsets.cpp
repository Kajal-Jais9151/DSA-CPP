#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void solve(vector<int>& nums, int i, vector<int> temp) {

    if (i >= nums.size()) {
        ans.push_back(temp);
        return;
    }

    // Include the current element
    temp.push_back(nums[i]);
    solve(nums, i + 1, temp);

    // Exclude the current element
    temp.pop_back();
    solve(nums, i + 1, temp);
}

vector<vector<int>> subsets(vector<int>& nums) {
    int i = 0;
    vector<int> temp;
    solve(nums, i, temp);
    return ans;
}

int main() {
    vector<int> nums;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> result = subsets(nums);

    for (auto subset : result) {
        cout << "[ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}