#include <string>
#include <iostream>

int nthFibo(int n);

int main()
{

    std::cout << nthFibo(5);

    return 0;
}


int nthFibo(int n) { 

    if (n == 1) 
        return 0; 
    if (n == 2) 
        return 1; 

    return nthFibo(n - 1) + nthFibo(n - 2);
}