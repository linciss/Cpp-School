#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int countSmileys(std::vector<std::string> arr);

int main(){

    vector<string> smile = {":D", ":~)", ";~)", ":)"};
    cout << countSmileys(smile); 

    return 0;
}

int countSmileys(std::vector<std::string> arr)
{
    int count=0;

   for(int i =0 ; i<arr.size();i++){
        if(arr[i].size()==2){
            if(arr[i][0] == ':' || arr[i][0] == ';'){
                if(arr[i][1] == ')' || arr[i][1] == 'D')
                count++;
            }
        }
        if(arr[i].size()==3){
            if(arr[i][0] == ':' || arr[i][0] == ';'){
                if(arr[i][1] == '-' || arr[i][1] == '~'){
                    if(arr[i][2] == ')' || arr[i][2]== 'D')
                count++;
                }
            }
        }

    }   
  return count;
}


    



