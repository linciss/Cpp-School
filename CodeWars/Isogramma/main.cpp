#include <iostream>
#include <string>

bool is_isogram(std::string str);


int main()
{

    std::cout << std::boolalpha << is_isogram("Dermatoglyphics");

    return 0;
}

bool is_isogram(std::string str) {

   for(int i =0; i<str.length();i++)
   {
    for(int j = 0;j<str.length();j++)
    {
        if(i ==j)
            j++;
             
        if(std::tolower(str[i]) == std::tolower(str[j]))
            return false;
    }
   }
    return true;
}
