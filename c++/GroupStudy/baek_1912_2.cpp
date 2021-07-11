#include <iostream>
#include <algorithm>

using namespace std;

int num;
int dp[100000];
int a[100000];

int maxDP(){
    int result = dp[0] = a[0];

    for(int i=1;i<num;i++){
        dp[i]=a[i];
        if(dp[i]<dp[i-1]+a[i]) {
            dp[i]=dp[i-1]+a[i];
        }
        result=max(result,dp[i]);
    }
    return result;
}

int main(){

    cin >> num;
    for(int i=0;i<num;i++)
        cin >> a[i];

    cout << maxDP() << endl;

    return 0;
}