/*Šis ir ļoti vienkāršs uzdevums. Jūsu programmai ir jānolasa skaitlis no ievaddatu faila reiz.in un jāizvada šis skaitlis pareizināts ar 2 failā reiz.out.*/


#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int N; 
  ifstream inputFile;
  ofstream outputFile;
  
  inputFile.open("reiz.in");
  outputFile.open("reiz.out");
  
  inputFile >> N;
  
  if(N<1&&N>32000){
    cout << "Choose a file between 1 and 32000";
    return 0;
  }
  
  outputFile << N*2;
  
  outputFile.close();
  inputFile.close();

}