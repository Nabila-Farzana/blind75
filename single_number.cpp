class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0; // xor with 0 does not change the result, So it's a safe choice
        for(auto num: nums){
            result =num ^ result; // Xor operation between two duplicate value returns 0, so single number will remain in the result lastly
        }
        return result;
    }
};
