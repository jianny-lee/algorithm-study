#include <iostream>
#include <vector>
#include <ios>

using namespace std;

int main(){

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    int max,min;
    cin >> n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    max = min = arr.front();

    for(int i=1;i<arr.size();i++){
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }

    cout << min << " " << max << endl;
}