#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    for(int i=0;i<testCase;i++){
        double personNum, result=0;
        vector<double> scoreArr;
        cin >> personNum;
        for(int j=0;j<personNum;j++){
            double score;
            cin >> score;
            scoreArr.push_back(score);
            result+=score;
        }
        double realScore = result/personNum; //평균 점수
        double upperScore = 0;

        for(int j=0;j<personNum;j++){
            if(scoreArr[j] > realScore){
                upperScore++;
            }
        }
        double resultScore = (upperScore/personNum)*100.00;
        printf("%.3f%%\n",round(resultScore*1000.0) / 1000.0);
    }
}