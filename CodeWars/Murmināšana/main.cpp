#include <iostream>
#include <string>

class Accumul
{
public:
    static std::string accum(const std::string &s)
    {
        std::string result;
        for (int i = 0; i < s.length(); i++)
        {
            result += toupper(s[i]);
            for (int j = 0; j < i; j++)
            {
                result += tolower(s[i]);
            }
            if (i != s.length() - 1)
            {
                result += "-";
            }
        }
        return result;

    }
};

int main()
{

    std::cout << Accumul::accum("abcd") << std::endl;


    return 0;
}