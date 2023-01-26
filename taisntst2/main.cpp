#include <iostream>
#include <fstream>

using namespace std;


int main(){

int n, m, kv = 1;
  ofstream out("taisntst2.rez");
	ifstream in("taisntst2.dat");
  
  in >> n >> m;
  noskipws(in);

  if(n>10000 || m>10000){
    return 0;
  }

		while (n != m){
			if (n > m) {
				n -= m;
				kv++;
			} else if (m > n){
				m -= n;
				kv++;
			}
		}
  
 out << kv;
  
  in.close();
  out.close();




    return 0;
}