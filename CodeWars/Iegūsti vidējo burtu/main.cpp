#include <iostream>
#include <string>

std::string get_middle(std::string input) ;

int main()
{

    std::cout << get_middle("testing");
    return 0;
}

std::string get_middle(std::string input) 
{
  int len = input.length();
	if(!(len % 2 == 0)) return input.substr(input.length()/2,1);
    else return input.substr(input.length()/2-1, 2);
}