#include <iostream>
#include <string>
#include <vector>

int break_chocolate(int n, int m);


int main()
{

    std::cout << break_chocolate(5, 5) << std::endl;

    return 0;
}


int break_chocolate(int n, int m){
    if(n == 0 || m == 0)
        return 0;
    return n*m-1;
}
