#include <string>
#include <iostream>

std::string cleanString(const std::string &s);

int main(){

        std::cout << cleanString("abc#d##c");

    return 0;
}

std::string cleanString(const std::string &s) {
   
    std::string result = s;

    for(int i =0; i<result.length();i++)
    {
        if(result[i] == '#'){
            result.erase(i-1, 2);

            i--;
            std::cout << result << " " << i << " ";
        }


    }

    return result;
}

