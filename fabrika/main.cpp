#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){

    ifstream in("fabrika.in");
    ofstream out("fabrika.out");

    int n, m, k;
    
    in >> n >> m >> k;
    noskipws(in);

    const int startValue_n=n+1, startValue_m=m+1;
    
    int count_colored=0, count_varnished=0, count_normal=0, count_raw=0;
    
    for(int i =0; i<k; i){
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