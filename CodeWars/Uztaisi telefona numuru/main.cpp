#include <iostream>
#include <string>
using namespace std;

std::string createPhoneNumber(const int arr [10]);


int main(){

    int arr [10] = {1,2,3,4,5,6,7,8,9,0};
    cout << createPhoneNumber(arr);
    return 0;
}


std::string createPhoneNumber(const int arr [10]){
    string phoneNumber= "(";

    for(int i =0; i<10; i++){

        if(i==3)phoneNumber+=") ";

        if(i==6)phoneNumber+="-";

        phoneNumber.append(to_string(arr[i]));
       
    }

 return phoneNumber;
}