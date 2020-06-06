#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;

    for(int i=0;i<9;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int max = arr.front();
    int current = 1;

    for(int i=1;i<9;i++){
        if(max < arr[i]){
            max = arr[i];
            current = i+1;
        }
    }
    cout << max << "\n" << current;
}