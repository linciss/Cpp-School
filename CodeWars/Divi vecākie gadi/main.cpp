#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

std::array<int, 2> two_oldest_ages(std::vector<int> ages);

int main()
{

    std::vector<int> ages = {1, 5, 87, 45, 8, 8};
    std::array<int, 2> result = two_oldest_ages(ages);
    std::cout << result[0] << " " << result[1] << std::endl;
    return 0;
}


std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    std::sort(ages.rbegin(), ages.rend());
    return {ages[1], ages[0]};
}
