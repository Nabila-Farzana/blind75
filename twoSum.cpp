class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target){
        unordered_map<int, int> umap;
        for(int i=0; i<nums.size();i++){
            int diff = target - nums[i];
            if(umap.count(diff) == 1){
                return {umap[diff], i};
            }
            else {
                umap[nums[i]] = i;
            }
        }
        return{-1, -1};
    }
};
