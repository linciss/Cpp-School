#include <iostream>
#include <string>
#include <vector>



std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls);

int main()
{

    std::vector<unsigned long long> ls = {1, 2, 3, 4, 5, 6};
    std::vector<unsigned long long> result = partsSum(ls);
    for (unsigned long long i : result) {
        std::cout << i << " ";
    }


    return 0;
}



std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls){
    std::vector<unsigned long long> result;
    unsigned long long sum = 0;
    for (unsigned long long i : ls) {
        sum += i;
    }
    
    result.push_back(sum);

    for (unsigned long long i : ls) {
        sum -= i;
        result.push_back(sum);
    }
    return result;
}