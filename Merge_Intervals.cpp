class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        sort(intervals.begin(), intervals.end());
        for(auto current_interval: intervals){
            if(merged.empty() || current_interval[0] > merged.back()[1]){
                merged.push_back(current_interval);
            }
            else{
                merged.back()[1] = max(current_interval[1], merged.back()[1]);
            }
        }
        return merged;
    }
};

// Time Complexity O(nlogn)
// Space Complexity O(nlogn)
