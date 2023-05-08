#include <string>
#include <iostream>

std::string DNAStrand(const std::string& dna);



int main()
{

    std::cout << DNAStrand("AAAA");
    return 0;
}


std::string DNAStrand(const std::string& dna)
{
      std::string temp = "";

    for(char c : dna){
      switch(c){
        case 'A':
            temp+= 'T';
            break;
        case 'T':
            temp+='A';
            break;
        case 'G':
            temp += 'C';
            break;
        case 'C':
            temp+= 'G';
            break;

        default:
            break;
            
        }
    }
    return temp;
}