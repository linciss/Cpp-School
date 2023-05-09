#include <string>
#include <iostream>
#include <vector>


std::vector<int> bubbleSortOnce(const std::vector<int> &input);


int main()
{
const std::vector<int> s = {7, 5, 3, 1, 2, 4, 6, 8, 9 };
std::vector<int> ss = bubbleSortOnce(s);
    for(int i =0; i<ss.size();i++)
    {
        std::cout << ss[i];

    }


    return 0;
}

std::vector<int> bubbleSortOnce(const std::vector<int> &input)
{
   std::vector<int> result = input;
    for(int i =0; i<input.size()-1;i++)
    {
        if(result[i] > result[i+1])
        {
            std::swap(result[i], result[i+1]);

        }

    }
    return result;
}