#include <iostream>
#include <string>

int digital_root(int n);

int main(){

    /*std::string str = "123";
    int sum =0;
    for(int i =0; i<str.length();i++){
        sum+= (int)str[i]-48;
    }
    std::cout << sum;*/


    std::cout << digital_root(195);

    return 0;
}

int digital_root(int n)
{
   std::string str = std::to_string(n);
    
    int sum =0;

    while(str.length()>1){
    sum =0;
    for(int i = 0; i<str.length();i++)
    {
        sum += (int)str[i]-48;
    }
        str.empty();
        str = std::to_string(sum);
    }

    return sum;
}