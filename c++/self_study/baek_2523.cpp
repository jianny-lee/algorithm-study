#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<2*n-1;i++){
        if(i < (2*n)/2){
            for(int j=0; j<=i;j++){
                cout << "*";
            }
        } else {
            for(int j=i;j<2*n-1;j++){
                cout << "*";
            }
        }
        
        cout << "\n";
    }
}

//n=4 7번째
//*
//**
//***
//****
//***
//**
//*