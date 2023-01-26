#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

const int code_len{7};
int main(){
    
    ifstream in("perskods.dat");
    ofstream out("perskods.rez");
 

    string code;
    
    in >> code;

    

    if(code.length()!= code_len){
        throw new invalid_argument("Code lenght is not 7");
        return 0;
    }

    in.close();

    int sum{};

   for(int i =0; i<code.length(); i++){
    if(i==0){
        sum+=(code[i]-'0')*2;
    }else if(i==1){
        sum+=(code[i]-'0')*7;
    }else if(i==2){
        sum+=(code[i]-'0')*6;
    }else if(i==3){
        sum+=(code[i]-'0')*5;
    }else if(i==4){
        sum+=(code[i]-'0')*4;
    }else if(i==5){
        sum+=(code[i]-'0')*3;
    }else if (i==6){
        sum+=(code[i]-'0')*2;
    }
   }
    sum %= 11;
    char digit;

    if(sum==0)digit = 'J';
    else if(sum==1)digit = 'A';
    else if(sum==2)digit = 'B';
    else if(sum==3)digit = 'C';
    else if(sum==4)digit = 'D';
    else if(sum==5)digit = 'E';
    else if(sum==6)digit = 'F';
    else if(sum==7)digit = 'G';
    else if(sum==8)digit = 'H';
    else if(sum==9)digit = 'I';
    else if(sum==10)digit = 'Z';
    
    out << digit;

    out.close();

}

