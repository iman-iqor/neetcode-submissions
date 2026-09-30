#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::map<int,int> map;
        int i =0;
        while(i< nums.size())
        {
            if(map.find(nums[i])!= map.end())
            {
                // std::cout<<"has duplicate"<<std::endl;
                return true;
            }
            map[nums[i]]=i;
            i++;
        }
        return false;
    }
};