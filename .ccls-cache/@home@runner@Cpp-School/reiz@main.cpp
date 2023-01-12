
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int N; 
  ifstream inputFile;
  ofstream outputFile;
  
  inputFile.open("reiz/reiz.in");
  outputFile.open("reiz/reiz.out");
  
  inputFile >> N;
  
  if(!(1 <= N && N <= 32000)){
    cout << "Choose a file between 1 and 32000";
    return 0;
  }
  
  outputFile << N*2;
  
  outputFile.close();
  inputFile.close();

}