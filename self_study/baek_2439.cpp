#include <iostream>

using namespace std;

int main(){
    int num;
    char star = '*';
    cin >> num;
    int cnt=0;

    for(int i=0;i<num;i++){
        for(int j=0;j<num-(i+1);j++)
            cout << " ";
        for(int j=0;j<i+1;j++)
            cout << star;
        cout << "\n";
    }
}