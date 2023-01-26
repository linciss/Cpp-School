#include <iostream>
#include <fstream>
using namespace std;


int main(){
    
    ifstream in("irpalin.dat");
    ofstream out("irpalin.rez");
    int lenght;
    string str;
    int count=0;
    in >> lenght;
    if(lenght>200)return 0;
    for (int i = 0 ; i < 1 ; i++) in.ignore(lenght, '\n') ;
    
    getline(in, str);
  
    for(int i =0;i<lenght;i++){
        if(str[i]>=65 && str[i]<=90)
        str[i]+=32;
    }

    for(int i =0; i<lenght; i++){
        if (str[i] == ',' || str[i] == ' ' || str[i] == '-' || str[i] == '!' || str[i] == '!') {
            str.erase(i, 1);
            i--;
            count++;
        }
    }

    lenght-=count;
    count =0;

    for(int i =0; i<lenght; i++){
    if(str[i] == str[lenght-i-1]){
        count++;
    }
}

    if(count==lenght){ out << "IR"; return 0;}
    out << "NAV";

    return 0;
}

