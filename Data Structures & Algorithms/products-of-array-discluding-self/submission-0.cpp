#include <iostream>
#include <string>
#include <vector>
class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums)
    {
        std::vector<int> ret;
        int i = 0;
        while(i < nums.size())
        {
            int j = 0;
            int tmp = 1;
            while(j < nums.size())
            {
                if(j != i)
                {
                    // std::cout<<i<<std::endl;
                    // std::cout<<j<<std::endl;
                    tmp*=nums[j];
                }
                
                j++;
            }
            ret.push_back(tmp);
            // std::cout<<std::endl;
            i++;
        }
        return ret;
    }
};
