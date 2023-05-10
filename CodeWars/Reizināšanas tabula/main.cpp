#include <iostream>
#include <string>
#include <vector>


std::vector<std::vector<int>> multiplication_table(int n);

int main()
{

    std::vector<std::vector<int>> result = multiplication_table(3);
    for (std::vector<int> i : result) {
        for (int j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

std::vector<std::vector<int>> multiplication_table(int n){

    int num = 1;
    std::vector<int> vec;
    std::vector<std::vector<int>> result;
    for(int i =1; i<=n; i++)
    {
        num =1;
        for(int j=1; j<=n;j++)
        {
            vec.push_back(num*i);
            num++;
        }
        result.push_back(vec);
        vec.clear();
    }

    return result;
}

