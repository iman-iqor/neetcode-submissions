#include <iostream>
#include <vector>
#include<algorithm>
#include<map>

class Solution
{
public:
    std::vector<std::vector<int>>  threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> ret;
        int sum = 0;
        int i = 0;
        int j =0;
        int k = 0;

        std::map<std::vector<int>,int> m;
        while(i<nums.size())
        {   
            j = i+1;
            while(j<nums.size())
            {
                k = j+1;
                while(k<nums.size())
                {
                    sum = nums[i]+nums[j]+nums[k];
                    if(sum == 0)
                    {
                        std::vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        sort(v.begin(),v.end());
                        m[v]++;
                        
                    }
                    k++;
                }
                j++;
            }
            i++;

        }
        std::map<std::vector<int>,int>::iterator it = m.begin();
        while(it!= m.end())
        {
            ret.push_back(it->first);
            it++;
        }
        return ret;
    }
};