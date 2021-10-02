class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()<2) return {};
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())  // target-nums[i]== nums[j] :: nums[i]+nums[j]=target
                return {mp[target-nums[i]], i};
            mp[nums[i]]=i;
        }
        return {};     
    }
};
//O(n)
//O(n)

/*------------------------------------------------------------------*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()<2) return {};
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]== target-nums[j]) return {i,j};
            }
        }
        return {};
    }
};
//O(n^2)
//O(1)
