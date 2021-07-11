#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int arr[a];

    for(int i=0;i<a;i++){
        int num;
        cin >> num;
        arr[i] = num;
    }

    for(int i=0;i<a;i++){
        if(arr[i] < b)
            cout << arr[i] << " ";
    }
}