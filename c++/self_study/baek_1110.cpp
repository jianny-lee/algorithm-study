#include <iostream>

using namespace std;

int main(){
    int n, result = 0;
    cin >> n;
    int comp = n;

    if(n < 0 || n > 100) exit(1);
    if(n< 10) comp = n + 0;
    while(true){
        int low=0;
        int tmp1,tmp2;
        
        if(comp < 10) comp = comp+0;
        tmp1 = comp / 10; //10의 자리수
        tmp2 = comp - (comp/10)*10; //1의 자리수
        
        comp = tmp1 + tmp2;
        
        if(comp >= 10){
            low = comp - (comp/10)*10; //1의 자리수
        } else low = comp;
        comp = tmp2*10 + low;
        result++;

        if(n == comp) break;
    }
    cout << result << endl;
}
//tmp1 + tmp2 = comp -> new comp
// 5 + 5 = 10 -> 50
// 5 + 0 = 5 -> 05
// 0 + 5 = 5 -> 55