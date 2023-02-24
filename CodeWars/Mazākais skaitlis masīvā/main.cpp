#include <iostream>
#include <vector>
using namespace std;


int findSmallest(vector <int> list);

int main(){

    vector<int> list = {1, 2, 3, 4, -5};
    cout << findSmallest(list);

    return 0;
}

int findSmallest(vector <int> list)
{
    int min = list[0];
   for(int i =1; i<list.size();i++){
    if(list[i]<min) min = list[i];
   }
  return  min;
}