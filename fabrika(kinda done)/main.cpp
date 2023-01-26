#include <iostream>
#include <fstream>
#include <cmath>
#include <chrono>
using namespace std;


auto start = chrono::steady_clock::now();
int main(){

    ifstream in("fabrika.in");
    ofstream out("fabrika.out");

    int n, m, k;
    
    in >> n >> m >> k;
    noskipws(in);
    const int startValue_n{n+1}, startValue_m {m+1};

    if(!(0<n<pow(10,6) && 0<m<pow(10,6) && 0<k<pow(10,9))){
        return 0;   
    }
    int count_colored{}, count_varnished{}, count_normal{}, count_raw{};
    for(int i =0; i<k; i++){

        if(i==m && i==n){
            count_raw++;
            m+=startValue_m;
            n+=startValue_n;
        }else if(i==n){
            count_varnished++;
            n+=startValue_n;
        }else if(i==m){
            count_colored++;
            m+=startValue_m;
        }else{
            count_normal++;
        }
    }
    out << count_normal << " " << count_raw << " " << count_colored << " " << count_varnished << endl;

    in.close();
    out.close();

    return 0;
}