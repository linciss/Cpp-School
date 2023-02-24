#include <iostream>
#include <vector>
#include <map>
using namespace std;

int score(const std::vector<int>& dice);


int main(){


    cout << score({1, 5, 1, 1, 4}) << endl;

    return 0;
}



int score(const std::vector<int>& dice) {

    int score=0, score2=0, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0;

    for(int i =0; i<dice.size();i++){
        switch(dice[i]){
            case 1: count1++; count1!=3 ? score+=100 : score=1000; break;
            case 2: count2++; if(count2==3) score+=200; break;
            case 3: count3++; if(count3==3) score+=300; break;
            case 4: count4++; if(count4==3) score+=400; break;
            case 5: count5++; count5!=3 ? score2+=50 : score2=500; break;
            case 6: count6++; if(count6==3) score+=600;break;
        }
    }
    score+=score2;
    return score;
}