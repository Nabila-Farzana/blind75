lass Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> uniq_quadraplets;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int first_element = 0; first_element < n-3; first_element++)
        {
            for(int second_element = first_element+1; second_element < n-2; second_element++)
            {
                int third_element = second_element + 1;
                int fourth_element = n - 1;
                while(third_element < fourth_element){
                    long long sum = (long long)nums[first_element] + (long long)nums[second_element] + (long long)nums[third_element] + (long long)nums[fourth_element];
                    if(sum == target){
                        uniq_quadraplets.insert({nums[first_element], nums[second_element], nums[third_element], nums[fourth_element]});
                        third_element++;
                        fourth_element--;
                    }
                    else if(sum < target){
                        third_element++;
                     }
                    else{
                        fourth_element--;
                    }
                }  
            }
        }
        vector<vector<int>> result(uniq_quadraplets.begin(), uniq_quadraplets.end());
        return result;
    }
};

// time complexity O(n*n*n)
