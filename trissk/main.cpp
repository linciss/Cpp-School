#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 2147483648;
const int MIN = -2147483647;

int main(){

    ifstream in;
    ofstream out;
    in.open("trissk.dat");
    out.open("trissk.rez");

    int a ,b ,c;

    in >> a >> b >> c;
    noskipws(in);
    if(a>MAX && a<MIN || b>MAX && b<MIN || c>MAX && c<MIN){
        return 0;
    }
    


    if(a+b>0 || a+c>0 || b+c>0){
        out << "VAR" << endl;
    }else{
        out << "NEVAR" << endl;
    }
    
    if(a+b==0|| a+c==0 || b+c==0){
        out << "VAR" << endl;
    }else{
        out << "NEVAR" << endl;
    }
    
    
    if(a+b<0 || a+c<0 || b+c<0){
        out << "VAR" << endl;
    }else{
        out << "NEVAR" << endl;
    }

    in.close();
    out.close();

    return 0;
    }

    

