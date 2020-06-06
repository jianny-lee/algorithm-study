#include <iostream>

using namespace std;

int num;
int grape[10001];
int dp[10001]={0};

int maxGrape(){
    dp[1] = grape[1];
    dp[2] = dp[1]+grape[2];
    int result = 0;

    for(int i=3;i<=num;i++){
        dp[i] = max(dp[i-3]+grape[i-1]+grape[i],max(dp[i-1],dp[i-2]+grape[i]));
    }

    return dp[num];
}
int main(){

    //포도주 잔 개수
    cin >> num;

    //포도주 양 입력
    for(int i=1;i<=num;i++){
        cin >> grape[i];
    }
    
    cout << maxGrape() << endl;

    return 0;
   
}