#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;

    for(int i=0;i<10;i++){
        int num;
        cin >> num;
        arr.push_back(num%42);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());

    cout << arr.size();
}