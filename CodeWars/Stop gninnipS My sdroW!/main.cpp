#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string spinWords(const std::string &str);

int main()
{
    std::cout << spinWords("Hey fellow warriors") << std::endl;
    

    return 0;
}


std::string spinWords(const std::string &str)
{
    std::string result;
    std::string word;
    for (char i : str) {
        if (i == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + i;
            word.clear();
        } else {
            word += i;
        }
    }
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    return result;
}// spinWords
