#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::string likes(const std::vector<std::string> &names);

int main(){

    vector<string> names = {"Ramis", "Kamis"};


    cout << likes(names);

    return 0;
}

std::string likes(const std::vector<std::string> &names)
{
  

    if(names.size()!=0){ 

    if(names.size()==1) return names.at(0) + " likes this";
    if(names.size()==2) return names.at(0) + " and " + names.at(1) + " like this";
    if(names.size()==3) return names.at(0) + " and " + names.at(1) +  " and " + names.at(1) + " like this";
    if(names.size()>=4) return names.at(0) + " , " + names.at(1) + " and "  + to_string(names.size()-2) + "other like this";
    
    }

    return "no one likes this";
}