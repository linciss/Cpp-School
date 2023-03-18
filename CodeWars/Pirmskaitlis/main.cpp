#include <iostream>
#include <cmath>
bool isPrime(int num);

int main(){

    std::cout << std::boolalpha << isPrime(15);

    return 0;
}

bool isPrime(int num){
if (num <= 1) {  
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) { 
        if (num % i == 0) {
            return false; 
        }
    }
    return true;  
}
