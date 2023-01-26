#include <iostream>
#include <fstream>

using namespace std;

int residue(int A, int N){
    return A%N;
}

int main(){
    
    ifstream in("atlikums.in");
    ofstream out("atlikums.out");
    int A, N;
    char newline = '\n';

    in >> A >> N;
    
    if(!(A<250 || 1<N<1000)){
        return 0;
    }

    out << residue(A,N);
    out.close();
    in.close();

    return 0;
}