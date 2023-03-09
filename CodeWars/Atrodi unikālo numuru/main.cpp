#include <iostream>
#include <vector>
using namespace std;

float find_uniq(const vector<float> &v);

int main(){

    vector<float> v = {999.666,  999.666, 999.666, 999.666, 999.666, 999.666, 999.666, 999, 999.666};

    cout << find_uniq(v);

    return 0;
}


 float find_uniq(const vector<float> &v)
{
    float first = v[0];
    float second = v[1];
    float third = v[2];

    if(first == second){
        for(int i = 2; i<v.size(); i++){
            if(v[i]!=first) return v[i];
        }
    }
    if(first == third){
        return second;
    }
    else return first;
}