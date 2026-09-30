#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &numbers, int target)
    {
        int sum;
        std::vector<int> ret;

        int i = 0;
        while(i < numbers.size())
        {
            int j = i+1;
            while(j < numbers.size())
            {
                sum = numbers[i] + numbers[j];
                if(numbers[i] != numbers[j] && sum == target)
                {
                    // std::cout<<i<<" "<<j<<" "<< sum<<std::endl;
                    ret.push_back(i+1);
                    ret.push_back(j+1);
                    return ret;
                }
                j++;
            }
            i++;
        }
        return ret;
    }
};
