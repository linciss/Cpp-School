#include <iostream>
#include <string>
using namespace std;
int main(){

    int N,count=0;
    string numbers;
    cin >> N;

    for(int i =1; i<=N; i++) numbers += to_string(i);
    for(int i =0; i<numbers.length();i++) count++;
   
    cout << count;
}
