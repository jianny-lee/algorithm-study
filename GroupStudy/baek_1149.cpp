#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001][3]; //[집의 수][rgb]
int main(){
    int n, rgb[1000][3],result;

    //집의 수 입력
    cin >> n;

    //rgb 가격 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> rgb[i][j];
        }
    }
    
    //dp의 첫 줄에 rgb의 첫 줄 값 대입
    dp[0][0]=rgb[0][0];
    dp[0][1]=rgb[0][1];
    dp[0][2]=rgb[0][2];

    //각 집의 최솟값
    for(int i=1;i<n;i++){
        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) +rgb[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) +rgb[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1]) +rgb[i][2];
    }

    //최솟값
    result = min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);

    cout << result << endl;
    
    return 0;
}