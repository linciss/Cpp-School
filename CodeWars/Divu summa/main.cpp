#include <iostream>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target);

int main()
{

    std::vector<int> vec = {2, 2, 3};
    std::pair<std::size_t, std::size_t> test;
  
    test = two_sum(vec, 4);
    std::cout << test.first << " " << test.second; 

    return 0;
}


std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {

    std::pair<std::size_t, std::size_t> result;

    for(int i =0; i<numbers.size();i++)
    {
        for(int j =0; j<numbers.size();j++)
        {
            if(i!=j)
            {
                
            if(numbers[i] + numbers[j] == target)
                {
                    result.first = i;
                    result.second = j;
                    
                }
            }
           

        }

    }
    return result;
}

