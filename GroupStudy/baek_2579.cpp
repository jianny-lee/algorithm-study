//처음부터 조건을 어길 수 없게 식을 짜는 방식이 dp로 접근하기에 훨씬 적합
//뒤에서부터 고려하여 식을 짜는 것이 훨씬 편함
#include <iostream>

using namespace std;

int step[300];
int dp[300]; //이차원 배열로 설정하는 이유는 [][0]부분은 마지막에 두칸 올라가서 3칸 가는거 걱정 없는 배열
                //[][1]부분은 마지막에 한칸 올라가서 3칸 올라가는 것을 걱정해야 하는 배열

int max(int a,int b){
    if (a > b) return a;
    else return b;
}
int main(){
    int num;

    cin >> num; //계단 수 입력
    for(int i=0;i<num;i++) cin >> step[i]; //각 계단의 점수 입력

    dp[0] = step[0];
    dp[1] = step[0]+step[1];
    dp[2] = max(step[0]+step[2],step[1]+step[2]);

    for(int i=3;i<num;i++){
        dp[i] = max(dp[i-2]+step[i],step[i-1]+step[i]+dp[i-3]);//2칸을 올라갈 경우 vs 1칸씩 두번 올라갈 경우(연속해서 3칸을 올라가면 안되므로 dp[i-3] 추가)
    }
    
    cout << dp[num-1] << endl;
    
    return 0;

}