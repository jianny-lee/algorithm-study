#include <iostream>
using namespace std;

int main(){
    int H,M;
    cin >> H >> M; //H시 M분
    if(M < 45){
        M += 15;
        if(--H < 0) H = 23;
    } else M-=45;

    cout << H << " " << M;
    
    return 0;
}