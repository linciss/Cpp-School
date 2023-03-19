#include <vector>
#include <iostream>

class Kata {
  public:
    int countInversions(const std::vector<int>& vec) {
    std::vector<int> v = vec;
    if(v.size()==0)
    {
        return 0;
    }
    int count = 0;
    bool swapped;
    for (int i = 0; i < v.size()-1; i++)
    {
        swapped = false;
        for (int j = 0; j < v.size()-i-1; j++)
        {
            if (v[j] > v[j+1])
            {
            count++;
            std::swap(v[j], v[j+1]);
            swapped = true;
            }
        }
    
        if (swapped == false)
            break;
    }
       return count;
    }
};


int main(){
    Kata kata;

    std::vector<int> v = {4, 3, 2, 1};

    std::cout << kata.countInversions(v);


    return 0;
}
