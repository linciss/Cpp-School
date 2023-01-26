#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>


using namespace std;

int main(){

    ifstream in;
    ofstream out;
    in.open("maksa.dat");
    out.open("maksa.rez");

    int h, m, d, N;
    char colon, newline = '\n';

    in >> N >> newline;
    in >> h >> colon >>m >> noskipws >>d;

    stringstream ss;
    ss << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << noskipws << setfill('0') << setw(2) <<d;
    string time = ss.str();


    if(N<1 || N>100){
        out << "hel";
        return 0;
    }
    if(h>23 || h<0 || m>59 || m<0){
        return 0;
        out << "he";
    }
    
    int sum{}, cost;

    if(h<7 && h > 19)cost = 10;
    if(h>19&& h<7)cost = 5;
    
    sum = cost*N*d;

    out << sum;

    in.close();
    out.close();
    return 0;
}