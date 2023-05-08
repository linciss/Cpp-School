#include <iostream>
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input);


int main(){
    
    std::vector<int> v = {0, 2, 3, 0, 6, 2};
    
    for(auto i: move_zeroes(v))
    {
        std::cout << i << " ";
    }

    return 0;
}

std::vector<int> move_zeroes(const std::vector<int>& input) {
std::vector<int> v = input;
bool swapped;
  for(int i =0; i<v.size();i++)
  {
      swapped = false;
        for (int j = 0; j < v.size()-i-1; j++)
        {
            if (v[j] == 0)
            {
            std::swap(v[j], v[j+1]);
            swapped = true;
            }
        }
        if (swapped == false)
            break;
  }
  return v;
}