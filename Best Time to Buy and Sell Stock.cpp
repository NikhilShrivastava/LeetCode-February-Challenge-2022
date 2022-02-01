class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX,maxp=0;
        for(int i=0;i<prices.size();i++)
        {
            if(minp>prices[i])
                minp=prices[i];
            if(prices[i]-minp>maxp)
                maxp=prices[i]-minp;
        }
        return maxp;
    }
};
