#include <iostream>
#include <ios>

using namespace std;

int main(){
    int testNum;
    int *arr = new int[testNum];
    
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> testNum;

    for(int i=0;i<testNum;i++){
        int a,b;
        cin >> a >> b;
        arr[i] = a + b;
    }

    for(int i=0;i<testNum;i++){
        cout << "Case #" << i+1 << ": " << arr[i] << endl;
    }
}