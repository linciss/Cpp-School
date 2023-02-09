
#include <fstream>
#include <cmath>
#include <iostream>
using namespace std;



int main(){
    ifstream in("armstr.in");
    ofstream out("armstr.out");

    int n, size, sum=0;
    in >> n;
     size = log10(n)+1;
     if(size>50)return 0;
    int temp = n;
    while(n>0){
        double num = n%10;
        n/=10;
        sum+=pow(num, size);
    }
    if(sum==temp){ out << "IR"; return 0;}
    out << "NAV";


    return 0;
}