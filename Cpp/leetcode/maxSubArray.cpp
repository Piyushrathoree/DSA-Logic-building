//single number leetode problem solved by bitwise xor
#include <iostream>
#include <vector>
using namespace std;

class singleNumber {

  public:
    int solution(vector<int> &nums) {
        int result = 0;
        for(int num : nums) {
            result ^= num;
        }
        cout << result << endl;
        return result;
    }
};
int main() {
    singleNumber sn;
    vector<int> nums = {2, 2, 4, 1, 1};
    sn.solution(nums);
    return 0;
}