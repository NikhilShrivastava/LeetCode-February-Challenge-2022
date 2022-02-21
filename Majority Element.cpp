class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        for(auto i : mp)
        {
            if(i.second > (nums.size()/2) )
               res= i.first;
        }
               
               return res;
    }
    
               
};
