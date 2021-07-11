#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    int n;
    int num1;
    std::queue<int> q; //queue 선언하는 방법

    cin >> n;
    if(n > 10000||n < 1) exit(-1);

    for(int i=0;i<n;i++){
        string str;
        cin >> str;

        if(str == "push"){
            int num;
            cin >> num;
            q.push(num);
        }else if(str == "pop")
        {
            if(q.size()!=0) {
                num1 = q.front();
                q.pop();
            }else num1=-1;
            cout << num1 << endl;
        }else if(str == "size"){
            cout << q.size() << endl;
        }else if(str == "empty"){
            if(q.size() == 0) cout << "1" << endl;
            else cout << "0" << endl;
        }else if(str == "front"){
            if(q.size()!=0) cout << q.front() << endl;
            else cout << "-1" << endl;
        }else if(str == "back"){
            if(q.size()!=0) cout << q.back() << endl;
            else cout << "-1" <<endl;
        }
        
    }
    return 0;
}