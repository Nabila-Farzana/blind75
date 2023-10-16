class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest_sequence = 0;
        unordered_set<int> bucket(nums.begin(), nums.end()); //O(n)
        for(auto num: bucket){
            if(bucket.count(num - 1) == 0){
                //This is a starting element
                int sequenced_element = num; 
                while(bucket.count(sequenced_element)){
                    sequenced_element++;
                }
                longest_sequence = max(longest_sequence, sequenced_element - num);
            }
        }
        return longest_sequence;
    }
};

//time complexity O(n)
