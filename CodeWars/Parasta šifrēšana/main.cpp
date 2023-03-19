#include <string>
#include <iostream>


std::string encrypt(std::string text, int rule);

int main()
{
    std::cout << encrypt("a",1);

    return 0;
}

std::string encrypt(std::string text, int rule) {
    std::string result ="";
    for(char c: text)
    {
        if(c+rule>255)
        {
            result.push_back((c+rule)-256);
        }else{
            result.push_back(c+rule);
        }
    }
    return result;
}