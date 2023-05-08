#include <iostream>
#include <string>
#include <map>


std::map<char, unsigned> count(const std::string& string);


int main(){

    count("Hello World");

  return 0;
}


std::map<char, unsigned> count(const std::string& string) {

    std::map<char, unsigned> map;

    for (char c : string) {
        map[c]++;
        std::cout << map[c] << "\n";
    }

    return map;
    
}