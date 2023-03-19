#include <iostream>
#include <string>

std::string to_camel_case(std::string text);

int main(){

    std::string text = "the-stealth-warrior";
    std::cout << to_camel_case(text);
    

    return 0;
}

std::string to_camel_case(std::string text) {

    for(int i =0; i<text.length(); i++)
    {
        if(text[i] == '_' || text[i] == '-')
        {
            text.erase(i, 1);

            if(!(text[i]>=65 && text[i]<=90))
            {
                text[i] -= 32;
            }
        }
    }
}