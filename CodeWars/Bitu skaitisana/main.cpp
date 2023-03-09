#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned int countBits(unsigned long long n);

int main(){

    cout << countBits(10);

    return 0;
}

unsigned int countBits(unsigned long long n){
  vector<int> vec;
  /*for(int i=0; 0<n; i++)    
{    
    bin.push_back(n%2); 
    n= n/2;  
}  */

while(n!=0){
    vec.insert(vec.begin(), n%2);
    n/=2;
}
    return count(vec.begin(), vec.end(), 1);;
}