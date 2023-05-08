#include <iostream>
#include <string>


std::string remove_parentheses(const std::string &str);



int main(){

  std::cout << remove_parentheses("a(b(c))");

  return 0;
}

std::string remove_parentheses(const std::string &str)
{
  std::string result;
  int count = 0;
  for (char c : str)
  {
    if (c == '(')
    {
      count++;
    }
    else if (c == ')')
    {
      count--;
    }
    else if (count == 0)
    {
      result += c;
    }
  }
  return result;
}