#include <iostream>
#include <vector>
#include <string>
class Solution
{
public:
    std::string encode(std::vector<std::string> &strs)
    {
        std::string ret;
        int i  = 0;
        while(i < strs.size())
        {
            ret+=std::to_string(strs[i].size());
            ret+="#";
            ret+=(strs[i]);
            i++;
        }
        std::cout<<ret<<std::endl;
        return ret;
    }


    std::vector<std::string> decode(std::string s)
    {
        std::vector<std::string> ret;
        
        int i = 0;
        while(i < s.size())
        {
            int j = i;
            while(s[j] != '#')
            {
                
                j++;
                
            }
            int len = std::stoi(s.substr(i,j-i));
            j++;
            ret.push_back(s.substr(j,len));
           
            i = j+len;
            
        }
        return ret;
    }
};