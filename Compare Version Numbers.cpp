class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        while(true){
            int total1=0, total2=0;
            while( i < version1.size() && version1[i] != '.' ){
                total1+=total1*10 + (version1[i]-48);
                i++;
            }
            while(j < version2.size() && version2[j] != '.' ){
                total2+=total2*10 + (version2[j]-48);
                j++;
            }
            i++; j++;
            if(total1 > total2) return 1;
            else if(total1 < total2) return -1;
            if(i >= version1.size() && j >= version2.size()) break;
        }
        return 0;
        
        
    }
};
