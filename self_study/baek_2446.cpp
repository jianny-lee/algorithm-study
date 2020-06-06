#include <iostream>

using namespace std;

int main(){
    int n,p,m;
    cin >> n;

    for(int i=0;i<2*n-1;i++){ //0-8 -> 9
        if(i < (2*n)/2){ //0,1,2,3,4
            for(p=0;p<i;p++){
                cout << " ";
            }
            for(int j=i;j<2*n-i-1;j++){
                cout << "*";
                
            }
        } else { //5,6,7,8,
            for(m=0;m<p-1;m++){
                cout << " ";
            }
            p--;
            for(int j=m;j<2*n-p-1;j++){
                cout << "*";
            }
            
        }
        cout << "\n";
    }
}