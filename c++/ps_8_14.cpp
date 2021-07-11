#include <iostream>
#include <cstring> //memset
using namespace std;
const int MOD = 10000000;

int tase_case;
int cache[101][101];

//폴리오미노의 수 구하기
int poly(int n, int first){
    //기저 사례 : n==first
    if(n <= first) return 1;

    //메모이제이션
    int &result = cache[n][first];

    if(result!=-1) return result;
    result = 0;
    for(int second = 1;second<=n-first;++second){
        int add=second+first-1;
        add *= poly(n-first,second);
        add%=MOD;
        result += add;
        result %= MOD;
    }

    return result;
}

int main(){
    cin >> tase_case;
    int recNum;
    if(tase_case > 50||tase_case < 50) exit(-1);
    for(int i=0;i<tase_case;i++){
        
        cin >> recNum;
        if(recNum > 100||recNum < 1) exit(-1);
        
        memset(cache,-1,sizeof(cache));
    }
    cout << endl;

    cout<< poly(tase_case,recNum) << endl;

    return 0;
}