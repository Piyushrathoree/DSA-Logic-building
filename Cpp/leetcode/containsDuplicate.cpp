#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
   for (int i = 0; i < nums.size(); i++) {
        // Check for duplicates by comparing with subsequent elements
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                return true; // Duplicate found
            }
        }
    }
    return false;
}
int main() {
    vector<int> nums = {3, 3};
    cout << containsDuplicate(nums) << endl;
    return 0;
}