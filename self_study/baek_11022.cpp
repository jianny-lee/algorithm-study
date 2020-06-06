#include <iostream>
#include <ios>

using namespace std;

int main(){
    int testNum;
    
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> testNum;

    for(int i=0;i<testNum;i++){
        int a,b;
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a+b << endl;
    }

    for(int i=0;i<testNum;i++){
        
    }
}