class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> uniq_triplets;
        // vector<vector<int>> output;
        sort(nums.begin(), nums.end());

        for(int current_element=0; current_element <nums.size(); current_element++){
            int left = current_element + 1;
            int right = nums.size() - 1;
            while(left < right){
                int sum = nums[current_element] + nums[left] + nums[right];
                if (sum == 0){
                    uniq_triplets.insert({nums[current_element], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if(sum < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        vector<vector<int>> output(uniq_triplets.begin(), uniq_triplets.end());
        // for(auto triplet: uniq_triplets){
        //     output.push_back(triplet);
        // }
        return output;
    }
};

// time complexity n*n
