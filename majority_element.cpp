class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winner = 0;
        int vote_difference = 0;
        for(auto num : nums){
            if(vote_difference == 0){
                winner = num;
            }
            if(num == winner) vote_difference++;
            else vote_difference--;
        }
        return winner;
    }
};
// Time Complexity O(n)
