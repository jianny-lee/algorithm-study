#include <iostream>

using namespace std;

int main(){
    int hamMenu[3] = {0};
    int drink[2] = {0};

    //햄버거
    for(int i=0;i<3;i++){
        int price;
        cin >> price;
        hamMenu[i] = price;
    }

    //음료수
    for(int i=0;i<2;i++){
        int price;
        cin >> price;
        drink[i] = price;
    }
    int hamCheap = hamMenu[0];
    int drinkCheap = drink[0];

    for(int i=1;i<3;i++){
        if(hamCheap > hamMenu[i]) hamCheap = hamMenu[i];
    }

    if(drinkCheap > drink[1]) drinkCheap = drink[1];

    cout << (hamCheap + drinkCheap - 50) << endl;
}