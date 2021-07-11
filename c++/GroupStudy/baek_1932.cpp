#include <iostream>
using namespace std;


int dp[500][500] = { 0 };
int tri[500][500];

int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n,result=0;
    //삼각형의 크기 입력(stage)
    cin >> n;

    //삼각형에 값 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cin >> tri[i][j];
        }
    }
    dp[0][0] = tri[0][0];

    //dp에 값을 비교하며 각 경로에 따른 최댓값을 넣어주기
    for(int i=1;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0) dp[i][j] = dp[i-1][j]+tri[i][j];
            else if(j==i) dp[i][j] = dp[i-1][j-1]+tri[i][j];
            else {
                dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+tri[i][j];
            }
            if(result < dp[i][j]) result = dp[i][j];
        }
    }


    cout << result << endl;


    return 0;
}