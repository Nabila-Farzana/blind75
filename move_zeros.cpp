class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int track_zero = 0;
        for(int travarse_ptr = 0; travarse_ptr < nums.size(); travarse_ptr++){
            if(nums[ travarse_ptr ] != 0){
                swap(nums[track_zero], nums[travarse_ptr]);
                track_zero++;
            } 
        }
    }
};
// Time Complexity O(n)
// Need to move non zero elements in left. 
// travarse the array , if you find any non zero element , then swap it with track_zero pointer index, and then move track_zero pointer to the next index
