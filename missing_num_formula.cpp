class Solution {
public:
#include <iostream>
#include <vector>

int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int expected_sum= n*(n+1)/2;
    int actual_sum = 0;
    for (int num : nums) {
        actual_sum += num;
    }
    return expected_sum - actual_sum;
}
int main() {
    vector<int> nums = {3, 0, 1};
    cout << "Missing number: " << missingNumber(nums) << endl;
    return 0;
}
};
