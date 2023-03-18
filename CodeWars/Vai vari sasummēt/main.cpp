#include <iostream>
#include <vector>

int find_even_index (const std::vector <int> numbers);


int main(){

    std::vector<int> numbers = {1, 2, 3, 4, 3, 2, 1};
    std::cout << find_even_index(numbers);

    return 0;
}

int find_even_index (const std::vector <int> numbers)
{
    int sum = 0;
    int sum2 = 0;
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    for(int i = 0; i < numbers.size(); i++){
        sum -= numbers[i];
        if(sum == sum2) return i;
        sum2 += numbers[i];
    }
    return -1;
}


