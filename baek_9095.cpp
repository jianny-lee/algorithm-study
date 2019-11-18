#include<iostream>

using namespace std;

int D[11];
int add(int n){
    if(n<0) return 0;

    if(n<=1) return 1;
    
    if(D[n]) return D[n];

    return D[n] = add(n-3) + add(n-2) + add(n-1);
}
int main(){
    int t,n[15];

    cin >> t;

    for(int i=0;i<t;i++){
        cin >> n[i];
    }
    for(int i=0;i<t;i++){
        cout << add(n[i]) << endl;
    }
     
    return 0;
}
