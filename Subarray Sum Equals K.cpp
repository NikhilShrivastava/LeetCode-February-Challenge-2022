class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, req, count=0;
        int n = nums.size();
        map<int,int>m;
        m[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            req=sum-k;
            if(m.find(req)!=m.end()) count+=m[req];
            m[sum]++;
        }
        return count;
    }
};
