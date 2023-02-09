#include <iostream>
using namespace std;

const int MAX_LEN=15;
const int MIN_LEN=1;

int main(){

string roman_numerals;
    cin >> roman_numerals;

    for(char c : roman_numerals){
        if(c != 'I' && c != 'V' && c != 'X' && c != 'L' && c != 'C' && c != 'D' && c != 'M')
            return 0;
    }
    
    int arabic_numerals=0;
    int I=1, V=5, X=10, L=50, C=100, D=500, M=1000;;

    for(int i =0; i<roman_numerals.length(); i++){
        if(roman_numerals[i] == 'I'){
            if(roman_numerals[i+1] == 'V' || roman_numerals[i+1] == 'X'){
                arabic_numerals -= I;
            }else{
                arabic_numerals += I;
            }
        }
        if(roman_numerals[i] == 'V'){
                arabic_numerals += V;
        }
        if(roman_numerals[i] == 'X'){
            if(roman_numerals[i+1] == 'L' || roman_numerals[i+1] == 'C'){
                arabic_numerals -= X;
            }else{
                arabic_numerals += X;
            }
        }
        if(roman_numerals[i] == 'L'){
                arabic_numerals += L;
        }
        if(roman_numerals[i] == 'C'){
            if(roman_numerals[i+1] == 'D' || roman_numerals[i+1] == 'M'){
                arabic_numerals -= C;
            }else{
                arabic_numerals += C;
            }
        }
        if(roman_numerals[i] == 'D'){
                arabic_numerals += D;
        }
        if(roman_numerals[i] == 'M'){
            arabic_numerals += M;
        }
    }

    cout << arabic_numerals;

    return 0;
}