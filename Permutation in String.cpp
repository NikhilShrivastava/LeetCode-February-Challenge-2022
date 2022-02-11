class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        
        int n1=s1.size(), n2=s2.size(),i;
        if(n1>n2)
            return false;
        
        for(i=0;i<n1;i++)
        {
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        
        if(freq1 == freq2)
            return true;
        
        for( i=n1;i<n2;i++){
            freq2[s2[i-n1]-'a']--; 
            freq2[s2[i]-'a']++; 
            if(freq1 == freq2)
                return true;
        }
        return false;
    }
};
