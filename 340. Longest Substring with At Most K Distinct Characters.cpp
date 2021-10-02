class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        if(s.length()<=k) return s.length();
        int start=0;
        vector<int> count(128,0);
        for(int i=0;i<s.length();i++)
        {
            if(count[s[i]]++==0) k--;
            if(k<0)
            {
                count[s[start]]--;
                if(count[s[start++]]==0) k++;
            }
        }
        return s.length()-start;
    }
};
