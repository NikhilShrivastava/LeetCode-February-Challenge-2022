class Solution {
public:
    
void solve(vector<vector<int>> &ans, vector<int>& candidates, int target, vector<int> &v,int idx)
{
    if(target == 0)
    {
        ans.push_back(v);
        return;
    }
    if(target < 0)
        return ;
    
    for(int i = idx; i < candidates.size(); i++)
    {
        if(candidates[i] <= target)
        {
            v.push_back(candidates[i]);
            solve(ans, candidates, target - candidates[i],v, i);
            v.pop_back();
        }
        else break;
    }
        
}
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(),candidates.end());
        solve(ans,candidates,target,v,0);
        return ans;
    }
};
