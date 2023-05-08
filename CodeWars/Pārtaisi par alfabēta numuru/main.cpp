#include <iostream>
#include <string>
#include <map>

#include <string>

std::string alphabet_position(const std::string &text);



int main(){

    std::string text = "The sunset sets at twelve o' clock.";
    std::cout << alphabet_position(text) << std::endl;

}


std::string alphabet_position(const std::string &text) {
    std::map<char, int> alphabet;
    for (int i = 0; i < 26; i++) {
        alphabet['a' + i] = i + 1;
        alphabet['A' + i] = i + 1;
    }
    std::string result;
    for (char c : text) {
        if (alphabet.find(c) != alphabet.end()) {
            result.append(std::to_string(alphabet[c]) + " ");
        }
    }
    if (result.size() > 0) {
        result.pop_back();
    }
 
  return result;
}

