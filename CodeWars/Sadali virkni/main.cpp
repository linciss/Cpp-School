#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s);

int main()
{

    std::vector<std::string> result = solution("abc");

    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << std::endl;
    }

    return 0;
}


std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        temp += s[i];
        if (temp.length() == 2)
        {
            result.push_back(temp);
            temp = "";
        }
    }
    if (temp.length() == 1)
    {
        temp += "_";
        result.push_back(temp);
    }
    return result;
}