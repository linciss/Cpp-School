#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int arr[n];
    int oldArr[n];
    int num, count =0;;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        oldArr[i]=arr[i];
    }

    for(int i =0; i<n; i++){
            count =0;
        for(int j =0; j<n; j++){
            if(arr[i]==oldArr[j])count++;
        }
        if(count<2)num=arr[i];
    }
    cout << num;

/*
5
    7
   3 8
  8 1 0
 2 7 4 4
4 5 2 6 5
*/


}