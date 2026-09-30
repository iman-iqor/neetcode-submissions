#include<iostream>
#include<stack>
#include<algorithm>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        int i = 0;
        while(i < s.size())
        {
            if(s[i]=='[' || s[i]=='{' || s[i] == '(')
                stack.push(s[i]);
            else if(s[i] == ']' || s[i] == '}' || s[i] == ')')
            {
                if(stack.empty())   
                    return false;
                if((stack.top() == '{' && s[i]=='}') || (stack.top() == '[' && s[i]==']') || (stack.top() == '(' && s[i]==')'))
                {
                    stack.pop();
                }
                else
                    return false;
            }
            i++;
        }
        // std::cout<<stack.size()<<std::endl;
        if(stack.empty())
            return true;
        return false;
    }
};