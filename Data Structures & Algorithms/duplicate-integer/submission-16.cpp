#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::set<int> seen;
        for(int i=0;i< nums.size();i++)
        {
            if(seen.count(nums[i])==1)
                return true;
            seen.insert(nums[i]);
        }
        return false;
    }
};