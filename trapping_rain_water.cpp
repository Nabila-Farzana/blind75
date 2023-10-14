lass Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;
        int l_max = 0; int r_max = 0; int total_water = 0;
        while(left < right){
            l_max = max(l_max, height[left]);
            r_max = max(r_max, height[right]);

            if(height[left] < height[right]){
                total_water += l_max - height[left];
                left++;
            }
            else{
                total_water += r_max - height[right];
                right--;
            }
        }
        return total_water;
    }
}; 
// Time complexity O(n)
