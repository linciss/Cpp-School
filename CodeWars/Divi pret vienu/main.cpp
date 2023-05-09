#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
        std::string result = s1 + s2;
        std::vector<char> vec;
        std::vector<char>::iterator it;
        std::string::iterator it2;
        bool flag = false;
        for(it2 = result.begin(); it2 != result.end(); it2++){
            for(it = vec.begin(); it != vec.end(); it++){
                if(*it == *it2){
                    flag = true;
                }
            }
            if(flag == false){
                vec.push_back(*it2);
            }
            flag = false;
        }
        std::sort(vec.begin(), vec.end());
        std::string result2;
        for(it = vec.begin(); it != vec.end(); it++){
            result2 += *it;
        }
        return result2;
    }
};


int main()
{

    TwoToOne tto;

    std::cout << tto.longest("aretheyhere", "yestheyarehere");


    return 0;
}