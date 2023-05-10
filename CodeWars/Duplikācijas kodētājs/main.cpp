#include <iostream>
#include <string>
#include <vector>


std::string duplicate_encoder(const std::string& word);

int main()
{

   std::cout << duplicate_encoder("din") << std::endl;

    return 0;
}


#include <string>
std::string duplicate_encoder(const std::string& word){
  
    std::string result = "";
    for (int i = 0; i < word.size(); ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < word.size(); ++j) {
            if (i != j && std::tolower(word[i]) == std::tolower(word[j])) {
                isDuplicate = true;
                break;
            }
        }
        result += isDuplicate ? ')' : '(';
    }
  
  return result;
}