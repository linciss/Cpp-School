#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){

    ifstream in;
    ofstream out;
    in.open("skaitli.in");
    out.open("skaitli.out");

    int a, b , c = pow(a,2)*b, d = a*pow(b,2);

    in >> a >> b >> c >> d;
    noskipws(in);

    if(!(0<a<1000|| 0<b<1000)){
        return 0;
    }

    if(d!=0){
        if(b==0){
            b = sqrt (d);
            b*=-1;
        }
        
        a = d/pow(b,2);
        c=pow(a,2)*b;
        out << a << " " << b << " " << c << " " << d << endl;
        return 0;
    }
    if(c!=0){
        
        if(a==0){
            a = sqrt (c);
        }
        b = c/pow(a,2);
        d= a*pow(b,2);
        out << a << " " << b << " " << c << " " << d << endl;
        return 0;
    }

    

    return 0;
}