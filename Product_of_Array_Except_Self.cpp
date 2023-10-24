class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> answer(nums.size(), 1);
      int prefix = 1;
      for(int i=0; i< nums.size(); i++){
          answer[i] = prefix;
          prefix = prefix * nums[i];
      }
      int postfix = 1;
      for(int j= nums.size() - 1; j >= 0; j--){
          answer[j] = postfix * answer[j];
          postfix = postfix * nums[j];
      }
      return answer;
    }
};

// time complexity O(n)
// space complexity O(1)
