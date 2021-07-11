#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    int arr[10] = {0};
    cin >> a >> b >> c;
    int score = a*b*c;

    int divisor = 10;
    
    while(true){
        int result = (score % divisor)/(divisor/10);
        arr[result]+=1;
        if(score/divisor == 0){
            break;
        }
        divisor*=10;
        
    } 
    for(int i=0;i<10;i++){
        cout << arr[i] << endl;
    }
}

//(17037300%1000)/(1000/10) = 3
//(17037300%10000)/(10000/10) = 7