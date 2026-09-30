#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string,std::vector<std::string>> map;
        for(int i = 0;i < strs.size();i++)
        {
            std::string sorted = strs[i];
            std::sort(sorted.begin(),sorted.end());
            map[sorted].push_back(strs[i]);
        }
        std::vector<std::vector<std::string>> ret;
        
        for(auto it = map.begin();it != map.end();it++)
        {
            ret.push_back(it->second);
        }
        return ret;
    }
};
