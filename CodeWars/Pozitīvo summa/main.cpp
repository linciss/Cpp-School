#include <iostream>
#include <vector>

int positive_sum (const std::vector<int> arr);

int main()
{

    std::cout << positive_sum({1,2, -1});

    return 0;
}

int positive_sum (const std::vector<int> arr){
 int sum = 0;
  for(auto i=0; i<arr.size();i++){
    if(arr[i]>=0) sum+=arr[i];
  }
  return sum;
}
