#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int arr[num];

    for(int i=0;i<num;i++){
        int a,b;
        cin >> a >> b;
        arr[i] = a + b;
    }

    for(int i=0;i<num;i++){
        cout << arr[i] << endl;
    }
}