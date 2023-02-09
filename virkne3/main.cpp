#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ofstream out;
    ifstream in;
    string str;
    char c[str.size()];

    out.open("virkne3.out");
    in.open("virkne3.in");

   in >> str;

    for(int i =0; i<str.size(); i++){
        if(str[i] == str[i+1]){
               str.erase(i,1);
                i--;   
        }
    }

    out << str;
}
