#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int result = 0;

    for(int i=0;i<5;i++){
        int score;
        cin >> score;
        arr[i] = score;
    }

    for(int i=0;i<5;i++){
        if(arr[i]<40) arr[i] = 40;
        result += arr[i];
    }

    cout << result/5 << endl;
}