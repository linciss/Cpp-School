#include <iostream>
#include <string>


int square_digits(int num) ;
int main()
{

    std::cout << square_digits(7588);

    return 0;
}


int square_digits(int num) {

    std::string str = std::to_string(num);
    std::string result = "";
    for(char c: str)
    {
        int i = c - '0';
        result += std::to_string(i*i);
    }
    return std::stoi(result);
}