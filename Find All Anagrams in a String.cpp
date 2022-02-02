class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> result;
        
        int m = s.length();
        int n = p.length();
        
        if(n > m )
            return result;
        
        vector<int> a(26,0);
        vector<int> b(26,0);
        
        for(int i=0;i<n;i++)
        {
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }
        
        if(a == b )
            result.push_back(0);
        
        for(int i=n;i<m;i++)
        {
            b[s[i-n]-'a']--;
            b[s[i]-'a']++;
            
            if(a == b)
                result.push_back(i-n+1);
        }
        return result;
    }
};
