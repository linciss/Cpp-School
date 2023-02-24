#include <iostream>
#include <vector>
using namespace std;


int findOdd(const std::vector<int>& numbers);


int main(){

    vector<int> nums = {1,1,2,-2,5,2,4,4,-1,-2,5};
    cout << findOdd(nums);

    return 0;
}

int findOdd(const std::vector<int>& numbers){
 
    int arr[numbers.size()];
    int odd=0;

    for(int i =0; i< numbers.size();i++){
        arr[i]=numbers[i];
    }

    for(int i =0; i<numbers.size();i++){
        int count =0;
        for(int j = 0; j<numbers.size();j++){
            if(numbers[i] == arr[j])count++;
        }
        if(!(count%2==0)) odd=numbers[i];
    }
    return odd;
}