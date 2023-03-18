#include <iostream>
#include <vector>

bool valid_braces(std::string braces);

int main(){

    std::cout << std::boolalpha << valid_braces("(){}[]") << std::endl;

    return 0;
}

bool valid_braces(std::string braces) 
{
    // "(){}[]"
    std::vector<char> stack;
    for (char brace : braces) {
        if (brace == '(' || brace == '[' || brace == '{') {
            stack.push_back(brace);
        } else { 
            if (stack.empty()) {
                return false;
            }
            char last = stack.back();
            stack.pop_back();
            if (brace == ')' && last != '(') {
                return false;
            }
            if (brace == ']' && last != '[') {
                return false;
            }
            if (brace == '}' && last != '{') {
                return false;
            }
        }
    }
    return stack.empty();
}
