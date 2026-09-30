#include <iostream>
#include <vector>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int i = 0;
                    std::vector<int> v;

        while(i < nums.size())
        {
            int j = i+1;
            while(j < nums.size())
            {
                int tmp = nums[i] + nums[j];
                if(tmp == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
                j++;
            }
            i++;
        }
        return v;
    }
};
