#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::map<int,int> map;
        int i = 0;
        while(i < nums.size())
        {
            int complement=target-nums[i];
            if(map.find(complement) != map.end())
                return {map[complement],i};
            map[nums[i]]=i;
            i++;
        }
        return {};
    }
};