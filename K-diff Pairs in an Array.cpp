class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int prev_val, count = 0;
        sort(nums.begin(), nums.end());
        for(auto it = nums.begin(); it != nums.end(); it++) {
            if(it != nums.begin() and *it == prev_val) continue;
            if(binary_search(it+1, nums.end(), *it + k)) count++;
            prev_val = *it;
        }
        return count;
    }
};
