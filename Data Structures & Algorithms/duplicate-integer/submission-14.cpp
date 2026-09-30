#include<iostream>
#include<vector>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) 
    {
        size_t i = 0;
        while(i< nums.size())
        {
            
            size_t j = 0;
            while(j < nums.size())
            {
                if(i != j &&nums[i] == nums[j])
                    return true;
                j++;
            }
            i++;
        }
        return false;
    }
};