#include <iostream>
#include <ios>

using namespace std;

int main(){
    
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n=0;
    int *arr = new int[n];
    cin >> n;

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        arr[i] = a+b;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << "\n";
    }
}