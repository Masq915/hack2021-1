
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2) return s.length();
        int maxc=1, start=-1;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end()) start = max(start, mp[s[i]]);
            mp[s[i]]=i;
            maxc = max(maxc, i-start);
        }
        return maxc;
        
    }
};
//O(n)
//O(n)

/*------------------------------------------------------------------*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2) return s.length();
        unordered_map<char,int> mp;
        int maxc=1, count=0, start=0;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            while(start<i && mp[s[i]]!=1)
            {
                mp[s[start]]--;
                if(mp[s[start]]==0) mp.erase(s[start]);
                start++;
            }
            maxc = max(maxc, i-start+1);
        }
        return maxc;
    }
};
//O(n)
//O(n)

/*------------------------------------------------------------------*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2) return s.length();
        unordered_set<char> st;
        int maxc=1, count=0;
        for(int i=0;i<s.length()-1;i++)
        {
            st.clear();
            count=1;
            st.insert(s[i]);
            for(int j=i+1;j<s.length();j++)
            {
                if(st.find(s[j])!=st.end()) break;
                st.insert(s[j]);
                count++;
                maxc = max(maxc,count);
            }
        }
        return maxc;
    }
};
//O(n^2)
//O(n)
