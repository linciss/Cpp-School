#include <iostream>
#include <string>

#include <string>

std::string highAndLow(const std::string& numbers);

int main()
{

    std::cout << highAndLow("1 2 3");

    return 0;
}



std::string highAndLow(const std::string& numbers){
   std::string result = "";
    int max = -2147483648;
    int min = 2147483647;
    std::string temp = "";
    for(char c: numbers)
    {
        if(c == ' ')
        {
            if(std::stoi(temp) > max)
            {
                max = std::stoi(temp);
            }
            if(std::stoi(temp) < min)
            {
                min = std::stoi(temp);
            }
            temp = "";
        }else{
            temp += c;
        }
    }
    if(std::stoi(temp) > max)
            {
                max = std::stoi(temp);
            }
            if(std::stoi(temp) < min)
            {
                min = std::stoi(temp);
            }
    result += std::to_string(max);
    result += " ";
    result += std::to_string(min);
    return result;
}