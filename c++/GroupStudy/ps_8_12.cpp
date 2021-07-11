#include <iostream>
#include <cstring> //memset
using namespace std;

int num;
int rec[101];
int cache[101];
const int MOD=1000000007;

int tiling(int width){
    if(width<= 1) return 1;
    int &result = cache[width];

    if(result!=-1)//result, 즉 cache[n]에 값이 들어있다는 말
        return result;

    return result = (tiling(width-2)+tiling(width-1))%MOD;

}

//비대칭 타일링 문제를 해결하는 동적 계획법 알고리즘
//2*width 크기의 사각형을 채우는 비대칭 방법의 수를 반환한다
int asymmetric(int width){
    if(width % 2 == 1) //홀수
        return (tiling(width)-tiling(width/2)+MOD)%MOD;//가운데 2*1 직사각형 하나를 기준으로 대칭인 경우 뺀다
    int ret = tiling(width);
    ret = (ret - tiling(width/2)+MOD) % MOD; 
    ret = (ret - tiling(width/2-1)+MOD)%MOD;

    return ret;
}
int main(){
    cin >> num;
    if (num > 50||num<1) exit(-1);
    for(int i=0;i<num;i++) {
        int width;
        cin >> width;
        if(width > 100||width<1) exit(-1);
        
        memset(cache,-1,sizeof(cache));
        
        rec[i]=asymmetric(width);
        
    }

    cout << endl;
    for(int i=0;i<num;i++){
        cout<< rec[i] << endl;
    }
    return 0;
}