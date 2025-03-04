#include <iostream>
#include <vector>
#include <algorithm>  // For sort()

using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end()); 
    
    for (int i = 0; i < nums.size(); i++) { 
        if (nums[i] != i) {
            return i;
        }
    }
    
    return nums.size(); 
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << "Missing number: "<<missingNumber(nums)<<endl;
    return 0;
}

