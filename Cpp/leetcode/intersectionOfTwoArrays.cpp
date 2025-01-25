#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans; // To store the result

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                // Check if the element already exists in the result vector
                bool alreadyExists = false;
                for (int k = 0; k < ans.size(); k++) {
                    if (ans[k] == nums1[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                if (!alreadyExists) {
                    ans.push_back(nums1[i]); // Add only if it doesn't already exist
                }
                break; // Stop further comparisons for this element
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
