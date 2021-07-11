#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    int result;
    cin >> a >> b >> c;

    if(a > 100 || a < 1 || b > 100 || b < 1 || c > 100 || c < 1) exit(1);

    if(a > b){
        if(b > c) result = b;
        else{
            if(a > c) result = c;
            else result = a;
        }
    } else { // b > a
        if(b > c){
            if(a > c) result = a;
            else result = c;
        } else{ // c > b
            result = b;
        } 
    }

    cout << result << "\n";
}