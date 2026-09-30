#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int trap(std::vector<int> &height)
    {
      std::vector<int> highestleft(height.size());
      std::vector<int> highestright(height.size());
      int highest_left=0;
      int highest_right=0;
      for(int i=0;i<height.size();i++)
      {
        highestleft[i]=highest_left;
        highest_left=std::max(height[i],highest_left);
      }
      for(int i=height.size()-1;i>0;i--)
      {
        highestright[i]=highest_right;
        highest_right=std::max(height[i],highest_right);
      }
      int i = 0;
      int water=0;
      while(i<height.size())
      {
        int highest=std::min(highestleft[i],highestright[i]);
        if(highest>height[i])
            water+=highest-height[i];
        i++;
      }
      
    //   std::cout<<water<<std::endl;
      return water;
    }
};