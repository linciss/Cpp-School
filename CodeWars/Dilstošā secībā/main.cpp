#include <iostream>
#include <string>
#include <cinttypes>
#include <cstdlib>

uint64_t descendingOrder(uint64_t a);


int main()
{

       std::cout << descendingOrder(145263);

    return 0;
}


uint64_t descendingOrder(uint64_t a)
{
    std::string str;
    while(a>0)
    {
        str+=std::to_string(a%10);
        a/=10;
    }
        bool swapped;
        for(int i =0; i<str.length();i++)
        {
            swapped = false;
            for(int j =0; j<str.length()-i-1; j++)
            {
                if(str[j] < str[j+1])
                {
                    std::swap(str[j], str[j+1]);
                    swapped = true;                   
                }
            }
            if(swapped = false)
                break;
        }   
        char *pEnd;
        a = strtoull(str.c_str(), &pEnd, 10);
        //doesnt work :/
       // a = (uint64_t)std::stoull(str);
        

        return a;
}