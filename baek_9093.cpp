#include <iostream>
#include <stack>

using namespace std;


int main(){
    int test_case;
    cin >> test_case;
    cin.ignore();

    for(int i=0;i<test_case;i++){
        string pushStr;
        stack<char> strRep;
        getline(cin,pushStr); //공백문자가 들어갈 경우에는 getline 함수를 이용해야 함
        pushStr += '\n';
        
        for(char tmp : pushStr){
            if(tmp == ' ' || tmp == '\n'){
                while(!strRep.empty()){
                    cout << strRep.top();
                    strRep.pop();
                }
                cout << ' ';
            } else {
                strRep.push(tmp);
            }
        }
        cout << '\n';
    }

    return 0;
}