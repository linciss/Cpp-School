#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


class WhichAreIn
{

  public:

    static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2)
    {
        std::vector<std::string> result;
        for (int i = 0; i < array1.size(); i++)
        {
            for (int j = 0; j < array2.size(); j++)
            {
                if (array2[j].find(array1[i]) != std::string::npos)
                {
                    result.push_back(array1[i]);
                    break;
                }
            }
        }

        std::sort(result.begin(), result.end());
        return result;
    }


};
   

   
    int main(){
        WhichAreIn WhichAreIn;

        std::vector<std::string> array1 = {"arp", "live", "strong"};
        std::vector<std::string> array2 = {"lively", "alive", "harp", "sharp", "armstrong"};
        std::vector<std::string> result = WhichAreIn.inArray(array1, array2);
        for(int i = 0; i < result.size(); i++){
            std::cout << result[i] << std::endl;
        }

        return 0;
    }
   