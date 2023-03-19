#include <iostream>
#include <string>
#include <map>

std::string greekLeet(std::string str);


int main(){

   std::cout << greekLeet("AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz 123456789 0");

    return 0;
}

std::map<char, std::string> map = {

    {'a', "\u03B1"},
    {'b', "\u03B2"},
    {'c', "c"},
    {'d', "\u03B4"},
    {'e', "\u03B5"},
    {'f', "f"},
    {'g', "g"},
    {'h', "h"},
    {'i', "\u03B9"},
    {'j', "j"},
    {'k', "\u03BA"},
    {'l', "l"},
    {'m', "m"},
    {'n', "\u03B7"},
    {'o', "\u03B8"},
    {'p', "\u03C1"},
    {'q', "q"},
    {'r', "\u03C0"},
    {'s', "s"},
    {'t', "\u03C4"},
    {'u', "\u03BC"},
    {'v', "\u03C5"},
    {'w', "\u03C9"},
    {'x', "\u03C7"},
    {'y', "\u03B3"},
    {'z', "z"},
    {'A', "\u03B1"},
    {'B', "\u03B2"},
    {'C', "c"},
    {'D', "\u03B4"},
    {'E', "\u03B5"},
    {'F', "f"},
    {'G', "g"},
    {'H', "h"},
    {'I', "\u03B9"},
    {'J', "j"},
    {'K', "\u03BA"},
    {'L', "l"},
    {'M', "m"},
    {'N', "\u03B7"},
    {'O', "\u03B8"},
    {'P', "\u03C1"},
    {'Q', "q"},
    {'R', "\u03C0"},
    {'S', "s"},
    {'T', "\u03C4"},
    {'U', "\u03BC"},
    {'V', "\u03C5"},
    {'W', "\u03C9"},
    {'X', "\u03C7"},
    {'Y', "\u03B3"},
    {'Z', "z"},
    {'0', "0"},
    {'1', "1"},
    {'2', "2"},
    {'3', "3"},
    {'4', "4"},
    {'5', "5"},
    {'6', "6"},
    {'7', "7"},
    {'8', "8"},
    {'9', "9"},
    {' ', " "}

};

std::string greekLeet(std::string str)
{
    std::string result= "";
    for(int i =0; i<str.length();i++)
    {
        std::tolower(str[i]);
        auto it = map.find(str[i]);
        if (it != map.end()) 
        {
            result.append(it->second); 
        }
        else
        {
            result += str[i]; 
        }
    }
    return result;
}